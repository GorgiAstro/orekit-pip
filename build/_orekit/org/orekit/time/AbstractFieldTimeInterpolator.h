#ifndef org_orekit_time_AbstractFieldTimeInterpolator_H
#define org_orekit_time_AbstractFieldTimeInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeInterpolator;
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class AbstractFieldTimeInterpolator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_bb79ca80d85d0a66,
          mid_checkInterpolatorCompatibilityWithSampleSize_7825dbda7c77ee33,
          mid_getExtrapolationThreshold_dff5885c2c873297,
          mid_getNbInterpolationPoints_570ce0828f81a2c1,
          mid_getSubInterpolators_2afa36052df4765d,
          mid_interpolate_557eb4540302b61a,
          mid_interpolate_0b262a74531436b2,
          mid_interpolate_e846d67ab348970f,
          mid_addOptionalSubInterpolatorIfDefined_c6a8415fd6d0ffe5,
          mid_getTimeParameter_70f315842c002eb8,
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
