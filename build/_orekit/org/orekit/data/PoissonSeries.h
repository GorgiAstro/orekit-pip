#ifndef org_orekit_data_PoissonSeries_H
#define org_orekit_data_PoissonSeries_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class PolynomialNutation;
      class PoissonSeries$CompiledSeries;
      class BodiesElements;
      class FieldBodiesElements;
      class SeriesTerm;
      class PoissonSeries;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class Long;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PoissonSeries : public ::java::lang::Object {
       public:
        enum {
          mid_init$_eb152ceb778bf99d,
          mid_compile_cda8e90069187421,
          mid_getNonPolynomialSize_570ce0828f81a2c1,
          mid_getPolynomial_5b9d83970064b661,
          mid_value_bea6276a59f3cdf6,
          mid_value_2748c478a8009c37,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PoissonSeries(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PoissonSeries(const PoissonSeries& obj) : ::java::lang::Object(obj) {}

        PoissonSeries(const ::org::orekit::data::PolynomialNutation &, const ::java::util::Map &);

        static ::org::orekit::data::PoissonSeries$CompiledSeries compile(const JArray< PoissonSeries > &);
        jint getNonPolynomialSize() const;
        ::org::orekit::data::PolynomialNutation getPolynomial() const;
        jdouble value(const ::org::orekit::data::BodiesElements &) const;
        ::org::hipparchus::CalculusFieldElement value(const ::org::orekit::data::FieldBodiesElements &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PoissonSeries);
      extern PyTypeObject *PY_TYPE(PoissonSeries);

      class t_PoissonSeries {
      public:
        PyObject_HEAD
        PoissonSeries object;
        static PyObject *wrap_Object(const PoissonSeries&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
