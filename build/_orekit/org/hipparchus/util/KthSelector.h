#ifndef org_hipparchus_util_KthSelector_H
#define org_hipparchus_util_KthSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class PivotingStrategy;
    }
    namespace exception {
      class NullArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class KthSelector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_1d74d701de50c6b0,
          mid_getPivotingStrategy_b6c90f164ea1e1c5,
          mid_select_ac31a84fee33c024,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit KthSelector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        KthSelector(const KthSelector& obj) : ::java::lang::Object(obj) {}

        KthSelector();
        KthSelector(const ::org::hipparchus::util::PivotingStrategy &);

        ::org::hipparchus::util::PivotingStrategy getPivotingStrategy() const;
        jdouble select(const JArray< jdouble > &, const JArray< jint > &, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(KthSelector);
      extern PyTypeObject *PY_TYPE(KthSelector);

      class t_KthSelector {
      public:
        PyObject_HEAD
        KthSelector object;
        static PyObject *wrap_Object(const KthSelector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
