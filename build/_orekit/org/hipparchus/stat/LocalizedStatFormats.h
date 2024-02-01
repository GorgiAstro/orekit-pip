#ifndef org_hipparchus_stat_LocalizedStatFormats_H
#define org_hipparchus_stat_LocalizedStatFormats_H

#include "java/lang/Enum.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class Localizable;
    }
    namespace stat {
      class LocalizedStatFormats;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {

      class LocalizedStatFormats : public ::java::lang::Enum {
       public:
        enum {
          mid_getLocalizedString_5969ecf7afac3dba,
          mid_getSourceString_d2c8eb4129821f0e,
          mid_valueOf_98729243dcbccff7,
          mid_values_9e86d2103b1ec6a8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LocalizedStatFormats(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LocalizedStatFormats(const LocalizedStatFormats& obj) : ::java::lang::Enum(obj) {}

        static LocalizedStatFormats *COVARIANCE_MATRIX;
        static LocalizedStatFormats *ILLEGAL_STATE_PCA;
        static LocalizedStatFormats *INSUFFICIENT_DATA_FOR_T_STATISTIC;
        static LocalizedStatFormats *INVALID_REGRESSION_OBSERVATION;
        static LocalizedStatFormats *NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS;
        static LocalizedStatFormats *NOT_ENOUGH_DATA_REGRESSION;
        static LocalizedStatFormats *NOT_SUPPORTED_NAN_STRATEGY;
        static LocalizedStatFormats *NO_REGRESSORS;
        static LocalizedStatFormats *OUT_OF_BOUNDS_CONFIDENCE_LEVEL;
        static LocalizedStatFormats *OUT_OF_BOUNDS_QUANTILE_VALUE;
        static LocalizedStatFormats *OUT_OF_BOUND_SIGNIFICANCE_LEVEL;
        static LocalizedStatFormats *SIGNIFICANCE_LEVEL;
        static LocalizedStatFormats *TIES_ARE_NOT_ALLOWED;
        static LocalizedStatFormats *TOO_MANY_REGRESSORS;
        static LocalizedStatFormats *TWO_OR_MORE_CATEGORIES_REQUIRED;
        static LocalizedStatFormats *TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED;

        ::java::lang::String getLocalizedString(const ::java::util::Locale &) const;
        ::java::lang::String getSourceString() const;
        static LocalizedStatFormats valueOf(const ::java::lang::String &);
        static JArray< LocalizedStatFormats > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      extern PyType_Def PY_TYPE_DEF(LocalizedStatFormats);
      extern PyTypeObject *PY_TYPE(LocalizedStatFormats);

      class t_LocalizedStatFormats {
      public:
        PyObject_HEAD
        LocalizedStatFormats object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LocalizedStatFormats *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LocalizedStatFormats&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LocalizedStatFormats&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
