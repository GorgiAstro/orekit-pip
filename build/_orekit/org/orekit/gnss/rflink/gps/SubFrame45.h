#ifndef org_orekit_gnss_rflink_gps_SubFrame45_H
#define org_orekit_gnss_rflink_gps_SubFrame45_H

#include "org/orekit/gnss/rflink/gps/SubFrame.h"

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

          class SubFrame45 : public ::org::orekit::gnss::rflink::gps::SubFrame {
           public:
            enum {
              mid_getDataId_412668abc8d889e9,
              mid_getSvId_412668abc8d889e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame45(jobject obj) : ::org::orekit::gnss::rflink::gps::SubFrame(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame45(const SubFrame45& obj) : ::org::orekit::gnss::rflink::gps::SubFrame(obj) {}

            jint getDataId() const;
            jint getSvId() const;
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
          extern PyType_Def PY_TYPE_DEF(SubFrame45);
          extern PyTypeObject *PY_TYPE(SubFrame45);

          class t_SubFrame45 {
          public:
            PyObject_HEAD
            SubFrame45 object;
            static PyObject *wrap_Object(const SubFrame45&);
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
