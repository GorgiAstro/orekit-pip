#ifndef org_orekit_data_PoissonSeriesParser_H
#define org_orekit_data_PoissonSeriesParser_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class PolynomialParser$Unit;
      class PoissonSeries;
      class PoissonSeriesParser;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PoissonSeriesParser : public ::java::lang::Object {
       public:
        enum {
          mid_init$_8fd427ab23829bf5,
          mid_parse_276cce9257997802,
          mid_withDoodson_82b2677399174c90,
          mid_withFirstDelaunay_a4c7e7a5d2c091a4,
          mid_withFirstPlanetary_a4c7e7a5d2c091a4,
          mid_withGamma_a4c7e7a5d2c091a4,
          mid_withOptionalColumn_a4c7e7a5d2c091a4,
          mid_withPolynomialPart_1528efaaea485f62,
          mid_withSinCos_4953f8b52df33eee,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PoissonSeriesParser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PoissonSeriesParser(const PoissonSeriesParser& obj) : ::java::lang::Object(obj) {}

        PoissonSeriesParser(jint);

        ::org::orekit::data::PoissonSeries parse(const ::java::io::InputStream &, const ::java::lang::String &) const;
        PoissonSeriesParser withDoodson(jint, jint) const;
        PoissonSeriesParser withFirstDelaunay(jint) const;
        PoissonSeriesParser withFirstPlanetary(jint) const;
        PoissonSeriesParser withGamma(jint) const;
        PoissonSeriesParser withOptionalColumn(jint) const;
        PoissonSeriesParser withPolynomialPart(jchar, const ::org::orekit::data::PolynomialParser$Unit &) const;
        PoissonSeriesParser withSinCos(jint, jint, jdouble, jint, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PoissonSeriesParser);
      extern PyTypeObject *PY_TYPE(PoissonSeriesParser);

      class t_PoissonSeriesParser {
      public:
        PyObject_HEAD
        PoissonSeriesParser object;
        static PyObject *wrap_Object(const PoissonSeriesParser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
