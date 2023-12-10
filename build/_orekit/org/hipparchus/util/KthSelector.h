#ifndef org_hipparchus_util_KthSelector_H
#define org_hipparchus_util_KthSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
    }
    namespace util {
      class PivotingStrategy;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_9e8828a4c3553c5c,
          mid_getPivotingStrategy_2b26bc6a688cfe7a,
          mid_select_b041aeb6eaabe37b,
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
