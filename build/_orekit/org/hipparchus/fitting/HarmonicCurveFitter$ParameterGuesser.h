#ifndef org_hipparchus_fitting_HarmonicCurveFitter$ParameterGuesser_H
#define org_hipparchus_fitting_HarmonicCurveFitter$ParameterGuesser_H

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

      class HarmonicCurveFitter$ParameterGuesser : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3abde0be9b9c9773,
          mid_guess_a53a7513ecedada2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit HarmonicCurveFitter$ParameterGuesser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        HarmonicCurveFitter$ParameterGuesser(const HarmonicCurveFitter$ParameterGuesser& obj) : ::java::lang::Object(obj) {}

        HarmonicCurveFitter$ParameterGuesser(const ::java::util::Collection &);

        JArray< jdouble > guess() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fitting {
      extern PyType_Def PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser);
      extern PyTypeObject *PY_TYPE(HarmonicCurveFitter$ParameterGuesser);

      class t_HarmonicCurveFitter$ParameterGuesser {
      public:
        PyObject_HEAD
        HarmonicCurveFitter$ParameterGuesser object;
        static PyObject *wrap_Object(const HarmonicCurveFitter$ParameterGuesser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
