#ifndef org_hipparchus_distribution_EnumeratedDistribution_H
#define org_hipparchus_distribution_EnumeratedDistribution_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Double;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {

      class EnumeratedDistribution : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0e7c3032c7c93ed3,
          mid_checkAndNormalize_14dee4cb8cc3e959,
          mid_getPmf_e62d3bb06d56d7e3,
          mid_probability_855d8589234ef20e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EnumeratedDistribution(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EnumeratedDistribution(const EnumeratedDistribution& obj) : ::java::lang::Object(obj) {}

        EnumeratedDistribution(const ::java::util::List &);

        static JArray< jdouble > checkAndNormalize(const JArray< jdouble > &);
        ::java::util::List getPmf() const;
        jdouble probability(const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      extern PyType_Def PY_TYPE_DEF(EnumeratedDistribution);
      extern PyTypeObject *PY_TYPE(EnumeratedDistribution);

      class t_EnumeratedDistribution {
      public:
        PyObject_HEAD
        EnumeratedDistribution object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_EnumeratedDistribution *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const EnumeratedDistribution&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const EnumeratedDistribution&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
