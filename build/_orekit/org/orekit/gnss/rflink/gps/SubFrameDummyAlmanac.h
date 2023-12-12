#ifndef org_orekit_gnss_rflink_gps_SubFrameDummyAlmanac_H
#define org_orekit_gnss_rflink_gps_SubFrameDummyAlmanac_H

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

          class SubFrameDummyAlmanac : public ::org::orekit::gnss::rflink::gps::SubFrame45 {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrameDummyAlmanac(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrameDummyAlmanac(const SubFrameDummyAlmanac& obj) : ::org::orekit::gnss::rflink::gps::SubFrame45(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(SubFrameDummyAlmanac);
          extern PyTypeObject *PY_TYPE(SubFrameDummyAlmanac);

          class t_SubFrameDummyAlmanac {
          public:
            PyObject_HEAD
            SubFrameDummyAlmanac object;
            static PyObject *wrap_Object(const SubFrameDummyAlmanac&);
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
