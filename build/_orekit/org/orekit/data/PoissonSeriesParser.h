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
          mid_init$_99803b0791f320ff,
          mid_parse_86004db4ac2d5290,
          mid_withDoodson_ab9b99d60dd9b017,
          mid_withFirstDelaunay_bad66f92d0f51d88,
          mid_withFirstPlanetary_bad66f92d0f51d88,
          mid_withGamma_bad66f92d0f51d88,
          mid_withOptionalColumn_bad66f92d0f51d88,
          mid_withPolynomialPart_3768b074dfce1760,
          mid_withSinCos_fda9e5d057f7bd8a,
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
