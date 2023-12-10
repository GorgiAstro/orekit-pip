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
      class AbsoluteDate;
      class TimeStamped;
      class TimeInterpolator;
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
          mid_init$_bb79ca80d85d0a66,
          mid_checkInterpolatorCompatibilityWithSampleSize_a748072092391184,
          mid_getExtrapolationThreshold_dff5885c2c873297,
          mid_getNbInterpolationPoints_570ce0828f81a2c1,
          mid_getSubInterpolators_2afa36052df4765d,
          mid_interpolate_706b4b6f6d197b4e,
          mid_interpolate_ca327566eddabc11,
          mid_interpolate_db94401e92756319,
          mid_addOptionalSubInterpolatorIfDefined_cfbf80e0f0ffc468,
          mid_getTimeParameter_c6a5af2f1a642248,
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
