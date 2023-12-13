#ifndef org_orekit_gnss_rflink_gps_SubFrame4B_H
#define org_orekit_gnss_rflink_gps_SubFrame4B_H

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

          class SubFrame4B : public ::org::orekit::gnss::rflink::gps::SubFrame45 {
           public:
            enum {
              mid_getReserved03_55546ef6a647f39b,
              mid_getReserved04_55546ef6a647f39b,
              mid_getReserved05_55546ef6a647f39b,
              mid_getReserved06_55546ef6a647f39b,
              mid_getReserved07_55546ef6a647f39b,
              mid_getReserved08_55546ef6a647f39b,
              mid_getReserved09_55546ef6a647f39b,
              mid_getReserved10_55546ef6a647f39b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame4B(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame4B(const SubFrame4B& obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {}

            jint getReserved03() const;
            jint getReserved04() const;
            jint getReserved05() const;
            jint getReserved06() const;
            jint getReserved07() const;
            jint getReserved08() const;
            jint getReserved09() const;
            jint getReserved10() const;
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
          extern PyType_Def PY_TYPE_DEF(SubFrame4B);
          extern PyTypeObject *PY_TYPE(SubFrame4B);

          class t_SubFrame4B {
          public:
            PyObject_HEAD
            SubFrame4B object;
            static PyObject *wrap_Object(const SubFrame4B&);
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
