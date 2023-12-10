#ifndef org_orekit_gnss_rflink_gps_SubFrame4C_H
#define org_orekit_gnss_rflink_gps_SubFrame4C_H

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

          class SubFrame4C : public ::org::orekit::gnss::rflink::gps::SubFrame45 {
           public:
            enum {
              mid_getERD_2235cd056f5a882b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame4C(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame4C(const SubFrame4C& obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {}

            static jint NB_ERD;

            jint getERD(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(SubFrame4C);
          extern PyTypeObject *PY_TYPE(SubFrame4C);

          class t_SubFrame4C {
          public:
            PyObject_HEAD
            SubFrame4C object;
            static PyObject *wrap_Object(const SubFrame4C&);
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
