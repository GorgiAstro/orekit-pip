#ifndef org_hipparchus_fitting_GaussianCurveFitter$ParameterGuesser_H
#define org_hipparchus_fitting_GaussianCurveFitter$ParameterGuesser_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace fitting {
      class WeightedObservedPoint;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fitting {

      class GaussianCurveFitter$ParameterGuesser : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7d8f123763cd893c,
          mid_guess_25e1757a36c4dde2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GaussianCurveFitter$ParameterGuesser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GaussianCurveFitter$ParameterGuesser(const GaussianCurveFitter$ParameterGuesser& obj) : ::java::lang::Object(obj) {}

        GaussianCurveFitter$ParameterGuesser(const ::java::util::Collection &);

        JArray< jdouble > guess() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fitting {
      extern PyType_Def PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser);
      extern PyTypeObject *PY_TYPE(GaussianCurveFitter$ParameterGuesser);

      class t_GaussianCurveFitter$ParameterGuesser {
      public:
        PyObject_HEAD
        GaussianCurveFitter$ParameterGuesser object;
        static PyObject *wrap_Object(const GaussianCurveFitter$ParameterGuesser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
