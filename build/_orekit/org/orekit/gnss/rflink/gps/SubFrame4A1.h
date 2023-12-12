#ifndef org_orekit_gnss_rflink_gps_SubFrame4A1_H
#define org_orekit_gnss_rflink_gps_SubFrame4A1_H

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

          class SubFrame4A1 : public ::org::orekit::gnss::rflink::gps::SubFrame4A {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame4A1(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame4A(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame4A1(const SubFrame4A1& obj) : ::org::orekit::gnss::rflink::gps::SubFrame4A(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(SubFrame4A1);
          extern PyTypeObject *PY_TYPE(SubFrame4A1);

          class t_SubFrame4A1 {
          public:
            PyObject_HEAD
            SubFrame4A1 object;
            static PyObject *wrap_Object(const SubFrame4A1&);
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
