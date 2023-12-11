#ifndef org_orekit_rugged_utils_MaxSelector_H
#define org_orekit_rugged_utils_MaxSelector_H

#include "org/orekit/rugged/utils/Selector.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class MaxSelector;
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

        class MaxSelector : public ::org::orekit::rugged::utils::Selector {
         public:
          enum {
            mid_getInstance_dea02f2400e8d564,
            mid_selectFirst_41fce65646328eb2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MaxSelector(jobject obj) : ::org::orekit::rugged::utils::Selector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MaxSelector(const MaxSelector& obj) : ::org::orekit::rugged::utils::Selector(obj) {}

          static MaxSelector getInstance();
          jboolean selectFirst(jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(MaxSelector);
        extern PyTypeObject *PY_TYPE(MaxSelector);

        class t_MaxSelector {
        public:
          PyObject_HEAD
          MaxSelector object;
          static PyObject *wrap_Object(const MaxSelector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
