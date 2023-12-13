#ifndef org_orekit_data_PoissonSeriesParser_H
#define org_orekit_data_PoissonSeriesParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class PoissonSeries;
      class PolynomialParser$Unit;
      class PoissonSeriesParser;
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
          mid_init$_44ed599e93e8a30c,
          mid_parse_d3d2c20e86656cb1,
          mid_withDoodson_71e486f1e2a3f81a,
          mid_withFirstDelaunay_23a9dcacefe9d395,
          mid_withFirstPlanetary_23a9dcacefe9d395,
          mid_withGamma_23a9dcacefe9d395,
          mid_withOptionalColumn_23a9dcacefe9d395,
          mid_withPolynomialPart_87e4a7d7691b030f,
          mid_withSinCos_8d1ffe23bafb05dc,
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
