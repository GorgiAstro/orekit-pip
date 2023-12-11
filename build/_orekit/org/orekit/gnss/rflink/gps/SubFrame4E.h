#ifndef org_orekit_gnss_rflink_gps_SubFrame4E_H
#define org_orekit_gnss_rflink_gps_SubFrame4E_H

#include "org/orekit/gnss/rflink/gps/SubFrame45.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          class SubFrame4E : public ::org::orekit::gnss::rflink::gps::SubFrame45 {
           public:
            enum {
              mid_getAntiSpoofing_0092017e99012694,
              mid_getReserved10_412668abc8d889e9,
              mid_getReserved8_412668abc8d889e9,
              mid_getSvHealth_0092017e99012694,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame4E(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame4E(const SubFrame4E& obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {}

            static jint NB_AS;
            static jint NB_SVH;

            jint getAntiSpoofing(jint) const;
            jint getReserved10() const;
            jint getReserved8() const;
            jint getSvHealth(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          extern PyType_Def PY_TYPE_DEF(SubFrame4E);
          extern PyTypeObject *PY_TYPE(SubFrame4E);

          class t_SubFrame4E {
          public:
            PyObject_HEAD
            SubFrame4E object;
            static PyObject *wrap_Object(const SubFrame4E&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
