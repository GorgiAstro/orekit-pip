#ifndef org_orekit_time_AbstractTimeInterpolator_H
#define org_orekit_time_AbstractTimeInterpolator_H

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
      class TimeStamped;
      class TimeInterpolator;
      class AbsoluteDate;
    }
    namespace utils {
      class ImmutableTimeStampedCache;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class AbstractTimeInterpolator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_4320462275d66e78,
          mid_checkInterpolatorCompatibilityWithSampleSize_e0c9304973cf2143,
          mid_getCentralDate_cc9bc18ecf3c3f53,
          mid_getExtrapolationThreshold_9981f74b2d109da6,
          mid_getNbInterpolationPoints_d6ab429752e7c267,
          mid_getSubInterpolators_d751c1a57012b438,
          mid_interpolate_96cdbf28d116a6bf,
          mid_interpolate_12f5cef05abb91a8,
          mid_interpolate_05cdc96cbb5fa5a5,
          mid_addOptionalSubInterpolatorIfDefined_b595d182fd7509c4,
          mid_getTimeParameter_4da9543dba3042e5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractTimeInterpolator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractTimeInterpolator(const AbstractTimeInterpolator& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_EXTRAPOLATION_THRESHOLD_SEC;
        static jint DEFAULT_INTERPOLATION_POINTS;

        AbstractTimeInterpolator(jint, jdouble);

        static void checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::TimeInterpolator &, jint);
        static ::org::orekit::time::AbsoluteDate getCentralDate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::ImmutableTimeStampedCache &, jdouble);
        jdouble getExtrapolationThreshold() const;
        jint getNbInterpolationPoints() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::time::TimeStamped interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Collection &) const;
        ::org::orekit::time::TimeStamped interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::stream::Stream &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(AbstractTimeInterpolator);
      extern PyTypeObject *PY_TYPE(AbstractTimeInterpolator);

      class t_AbstractTimeInterpolator {
      public:
        PyObject_HEAD
        AbstractTimeInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractTimeInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractTimeInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractTimeInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
