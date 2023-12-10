#ifndef org_orekit_gnss_rflink_gps_SubFrame5B_H
#define org_orekit_gnss_rflink_gps_SubFrame5B_H

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

          class SubFrame5B : public ::org::orekit::gnss::rflink::gps::SubFrame45 {
           public:
            enum {
              mid_getReservedA10_f2f64475e4580546,
              mid_getReservedB10_f2f64475e4580546,
              mid_getSvHealth_38565d58479aa24a,
              mid_getTOA_f2f64475e4580546,
              mid_getWeekNumber_f2f64475e4580546,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame5B(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame5B(const SubFrame5B& obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {}

            jint getReservedA10() const;
            jint getReservedB10() const;
            jint getSvHealth(jint) const;
            jint getTOA() const;
            jint getWeekNumber() const;
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
          extern PyType_Def PY_TYPE_DEF(SubFrame5B);
          extern PyTypeObject *PY_TYPE(SubFrame5B);

          class t_SubFrame5B {
          public:
            PyObject_HEAD
            SubFrame5B object;
            static PyObject *wrap_Object(const SubFrame5B&);
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
