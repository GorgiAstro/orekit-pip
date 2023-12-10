#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$RotationOrderConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$RotationOrderConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            class ParseToken$RotationOrderConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_a908138988eb2a50,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$RotationOrderConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$RotationOrderConsumer(const ParseToken$RotationOrderConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            extern PyType_Def PY_TYPE_DEF(ParseToken$RotationOrderConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$RotationOrderConsumer);

            class t_ParseToken$RotationOrderConsumer {
            public:
              PyObject_HEAD
              ParseToken$RotationOrderConsumer object;
              static PyObject *wrap_Object(const ParseToken$RotationOrderConsumer&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
