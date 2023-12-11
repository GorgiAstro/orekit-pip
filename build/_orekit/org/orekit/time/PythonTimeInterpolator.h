#ifndef org_orekit_time_PythonTimeInterpolator_H
#define org_orekit_time_PythonTimeInterpolator_H

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
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class TimeInterpolator;
      class AbsoluteDate;
      class TimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonTimeInterpolator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getExtrapolationThreshold_557b8123390d8d0c,
          mid_getNbInterpolationPoints_412668abc8d889e9,
          mid_getSubInterpolators_0d9551367f7ecdef,
          mid_interpolate_b0318f5e4535bbc9,
          mid_interpolate_bd5b63eaa0e67fdc,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonTimeInterpolator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonTimeInterpolator(const PythonTimeInterpolator& obj) : ::java::lang::Object(obj) {}

        PythonTimeInterpolator();

        void finalize() const;
        jdouble getExtrapolationThreshold() const;
        jint getNbInterpolationPoints() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::time::TimeInterpolator interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Collection &) const;
        ::org::orekit::time::TimeInterpolator interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::stream::Stream &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(PythonTimeInterpolator);
      extern PyTypeObject *PY_TYPE(PythonTimeInterpolator);

      class t_PythonTimeInterpolator {
      public:
        PyObject_HEAD
        PythonTimeInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonTimeInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonTimeInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonTimeInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
