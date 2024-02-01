#ifndef org_orekit_time_AbstractFieldTimeInterpolator_H
#define org_orekit_time_AbstractFieldTimeInterpolator_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
      class FieldTimeInterpolator;
    }
    namespace utils {
      class ImmutableFieldTimeStampedCache;
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
          mid_init$_4320462275d66e78,
          mid_checkInterpolatorCompatibilityWithSampleSize_35f01709a876513a,
          mid_getCentralDate_b2f7fe9d83f790e1,
          mid_getExtrapolationThreshold_9981f74b2d109da6,
          mid_getNbInterpolationPoints_d6ab429752e7c267,
          mid_getSubInterpolators_d751c1a57012b438,
          mid_interpolate_f4186cd94813d116,
          mid_interpolate_ecda3df535f73158,
          mid_interpolate_6a638f4b2a02f57a,
          mid_addOptionalSubInterpolatorIfDefined_c7bd7093c656df75,
          mid_getTimeParameter_79346064d4531e41,
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
        static ::org::orekit::time::FieldAbsoluteDate getCentralDate(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::ImmutableFieldTimeStampedCache &, jdouble);
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
