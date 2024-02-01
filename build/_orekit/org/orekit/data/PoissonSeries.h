#ifndef org_orekit_data_PoissonSeries_H
#define org_orekit_data_PoissonSeries_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class PolynomialNutation;
      class FieldBodiesElements;
      class SeriesTerm;
      class PoissonSeries;
      class BodiesElements;
      class PoissonSeries$CompiledSeries;
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
          mid_init$_e7a891d3e9be8376,
          mid_compile_0bffb48394191881,
          mid_getNonPolynomialSize_d6ab429752e7c267,
          mid_getPolynomial_ac81f10a3d10c55a,
          mid_value_7212d8ed403494a1,
          mid_value_3cea1ba38c4e1540,
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
