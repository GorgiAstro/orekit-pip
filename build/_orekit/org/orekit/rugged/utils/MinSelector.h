#ifndef org_orekit_rugged_utils_MinSelector_H
#define org_orekit_rugged_utils_MinSelector_H

#include "org/orekit/rugged/utils/Selector.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class MinSelector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        class MinSelector : public ::org::orekit::rugged::utils::Selector {
         public:
          enum {
            mid_getInstance_66f0279de41aba24,
            mid_selectFirst_cd8da52a7e84190c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MinSelector(jobject obj) : ::org::orekit::rugged::utils::Selector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MinSelector(const MinSelector& obj) : ::org::orekit::rugged::utils::Selector(obj) {}

          static MinSelector getInstance();
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
        extern PyType_Def PY_TYPE_DEF(MinSelector);
        extern PyTypeObject *PY_TYPE(MinSelector);

        class t_MinSelector {
        public:
          PyObject_HEAD
          MinSelector object;
          static PyObject *wrap_Object(const MinSelector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
