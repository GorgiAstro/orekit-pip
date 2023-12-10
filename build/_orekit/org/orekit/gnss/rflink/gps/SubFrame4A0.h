#ifndef org_orekit_gnss_rflink_gps_SubFrame4A0_H
#define org_orekit_gnss_rflink_gps_SubFrame4A0_H

#include "org/orekit/gnss/rflink/gps/SubFrame4A.h"

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

          class SubFrame4A0 : public ::org::orekit::gnss::rflink::gps::SubFrame4A {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame4A0(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame4A(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame4A0(const SubFrame4A0& obj) : ::org::orekit::gnss::rflink::gps::SubFrame4A(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(SubFrame4A0);
          extern PyTypeObject *PY_TYPE(SubFrame4A0);

          class t_SubFrame4A0 {
          public:
            PyObject_HEAD
            SubFrame4A0 object;
            static PyObject *wrap_Object(const SubFrame4A0&);
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
