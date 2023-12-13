#ifndef org_orekit_data_PoissonSeries$CompiledSeries_H
#define org_orekit_data_PoissonSeries$CompiledSeries_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace data {
      class FieldBodiesElements;
      class BodiesElements;
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
    namespace data {

      class PoissonSeries$CompiledSeries : public ::java::lang::Object {
       public:
        enum {
          mid_derivative_385587d041c81b1f,
          mid_derivative_8e0d8ae8849d1551,
          mid_value_385587d041c81b1f,
          mid_value_8e0d8ae8849d1551,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PoissonSeries$CompiledSeries(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PoissonSeries$CompiledSeries(const PoissonSeries$CompiledSeries& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > derivative(const ::org::orekit::data::BodiesElements &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > derivative(const ::org::orekit::data::FieldBodiesElements &) const;
        JArray< jdouble > value(const ::org::orekit::data::BodiesElements &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > value(const ::org::orekit::data::FieldBodiesElements &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PoissonSeries$CompiledSeries);
      extern PyTypeObject *PY_TYPE(PoissonSeries$CompiledSeries);

      class t_PoissonSeries$CompiledSeries {
      public:
        PyObject_HEAD
        PoissonSeries$CompiledSeries object;
        static PyObject *wrap_Object(const PoissonSeries$CompiledSeries&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
