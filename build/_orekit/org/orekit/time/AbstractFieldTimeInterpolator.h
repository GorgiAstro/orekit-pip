#ifndef org_orekit_time_AbstractFieldTimeInterpolator_H
#define org_orekit_time_AbstractFieldTimeInterpolator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeInterpolator;
      class FieldTimeStamped;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class AbstractFieldTimeInterpolator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_89aad365fb0ed8da,
          mid_checkInterpolatorCompatibilityWithSampleSize_8c13907d579f7554,
          mid_getExtrapolationThreshold_557b8123390d8d0c,
          mid_getNbInterpolationPoints_412668abc8d889e9,
          mid_getSubInterpolators_0d9551367f7ecdef,
          mid_interpolate_cc27df3dc8f597ed,
          mid_interpolate_a061c10693b292f5,
          mid_interpolate_43d454da912ece22,
          mid_addOptionalSubInterpolatorIfDefined_186bcaa418c2f7bb,
          mid_getTimeParameter_87e809fd5a2def41,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractFieldTimeInterpolator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractFieldTimeInterpolator(const AbstractFieldTimeInterpolator& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_EXTRAPOLATION_THRESHOLD_SEC;
        static jint DEFAULT_INTERPOLATION_POINTS;

        AbstractFieldTimeInterpolator(jint, jdouble);

        static void checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::FieldTimeInterpolator &, jint);
        jdouble getExtrapolationThreshold() const;
        jint getNbInterpolationPoints() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::time::FieldTimeStamped interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::Collection &) const;
        ::org::orekit::time::FieldTimeStamped interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::stream::Stream &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(AbstractFieldTimeInterpolator);
      extern PyTypeObject *PY_TYPE(AbstractFieldTimeInterpolator);

      class t_AbstractFieldTimeInterpolator {
      public:
        PyObject_HEAD
        AbstractFieldTimeInterpolator object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_AbstractFieldTimeInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractFieldTimeInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractFieldTimeInterpolator&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
