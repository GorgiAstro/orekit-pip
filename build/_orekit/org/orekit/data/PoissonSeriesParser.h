#ifndef org_orekit_data_PoissonSeriesParser_H
#define org_orekit_data_PoissonSeriesParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class PoissonSeriesParser;
      class PoissonSeries;
      class PolynomialParser$Unit;
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PoissonSeriesParser : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a3da1a935cb37f7b,
          mid_parse_7bc0c72c38f7f723,
          mid_withDoodson_26b8a2a75a89e12b,
          mid_withFirstDelaunay_2098ad57f676ba38,
          mid_withFirstPlanetary_2098ad57f676ba38,
          mid_withGamma_2098ad57f676ba38,
          mid_withOptionalColumn_2098ad57f676ba38,
          mid_withPolynomialPart_fc61e1684ac4d72c,
          mid_withSinCos_12c525c604f68c4f,
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
