#ifndef org_orekit_rugged_utils_DSGenerator_H
#define org_orekit_rugged_utils_DSGenerator_H

#include "org/orekit/rugged/utils/DerivativeGenerator.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
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
    namespace rugged {
      namespace utils {

        class DSGenerator : public ::org::orekit::rugged::utils::DerivativeGenerator {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DSGenerator(jobject obj) : ::org::orekit::rugged::utils::DerivativeGenerator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DSGenerator(const DSGenerator& obj) : ::org::orekit::rugged::utils::DerivativeGenerator(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        extern PyType_Def PY_TYPE_DEF(DSGenerator);
        extern PyTypeObject *PY_TYPE(DSGenerator);

        class t_DSGenerator {
        public:
          PyObject_HEAD
          DSGenerator object;
          static PyObject *wrap_Object(const DSGenerator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
