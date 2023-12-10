#ifndef org_orekit_data_PoissonSeries_H
#define org_orekit_data_PoissonSeries_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class Long;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class BodiesElements;
      class PoissonSeries$CompiledSeries;
      class PolynomialNutation;
      class FieldBodiesElements;
      class SeriesTerm;
      class PoissonSeries;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PoissonSeries : public ::java::lang::Object {
       public:
        enum {
          mid_init$_15261f7c2d65d14d,
          mid_compile_c342c29781b1c8a8,
          mid_getNonPolynomialSize_f2f64475e4580546,
          mid_getPolynomial_1320c5726800138e,
          mid_value_68f0627d4a947675,
          mid_value_8988cf596cc2decd,
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
