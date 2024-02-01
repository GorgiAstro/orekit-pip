#ifndef org_orekit_time_PythonTimeInterpolator_H
#define org_orekit_time_PythonTimeInterpolator_H

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
    class Throwable;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonTimeInterpolator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getExtrapolationThreshold_9981f74b2d109da6,
          mid_getNbInterpolationPoints_d6ab429752e7c267,
          mid_getSubInterpolators_d751c1a57012b438,
          mid_interpolate_1ab634d5d296a86b,
          mid_interpolate_83796f1a07da3138,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
