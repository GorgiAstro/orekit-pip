#ifndef org_orekit_gnss_rflink_gps_SubFrame4A_H
#define org_orekit_gnss_rflink_gps_SubFrame4A_H

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

          class SubFrame4A : public ::org::orekit::gnss::rflink::gps::SubFrame45 {
           public:
            enum {
              mid_getReserved03_55546ef6a647f39b,
              mid_getReserved04_55546ef6a647f39b,
              mid_getReserved05_55546ef6a647f39b,
              mid_getReserved06_55546ef6a647f39b,
              mid_getReserved07_55546ef6a647f39b,
              mid_getReserved08_55546ef6a647f39b,
              mid_getReserved10_55546ef6a647f39b,
              mid_getReservedA09_55546ef6a647f39b,
              mid_getReservedB09_55546ef6a647f39b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame4A(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame4A(const SubFrame4A& obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {}

            jint getReserved03() const;
            jint getReserved04() const;
            jint getReserved05() const;
            jint getReserved06() const;
            jint getReserved07() const;
            jint getReserved08() const;
            jint getReserved10() const;
            jint getReservedA09() const;
            jint getReservedB09() const;
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
          extern PyType_Def PY_TYPE_DEF(SubFrame4A);
          extern PyTypeObject *PY_TYPE(SubFrame4A);

          class t_SubFrame4A {
          public:
            PyObject_HEAD
            SubFrame4A object;
            static PyObject *wrap_Object(const SubFrame4A&);
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
