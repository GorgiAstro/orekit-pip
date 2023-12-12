#ifndef org_orekit_time_PythonFieldTimeInterpolator_H
#define org_orekit_time_PythonFieldTimeInterpolator_H

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

      class PythonFieldTimeInterpolator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getExtrapolationThreshold_557b8123390d8d0c,
          mid_getNbInterpolationPoints_412668abc8d889e9,
          mid_getSubInterpolators_0d9551367f7ecdef,
          mid_interpolate_0d1a3de47e765f3f,
          mid_interpolate_1a679ded4d218b1e,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldTimeInterpolator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldTimeInterpolator(const PythonFieldTimeInterpolator& obj) : ::java::lang::Object(obj) {}

        PythonFieldTimeInterpolator();

        void finalize() const;
        jdouble getExtrapolationThreshold() const;
        jint getNbInterpolationPoints() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::time::FieldTimeInterpolator interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::Collection &) const;
        ::org::orekit::time::FieldTimeInterpolator interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::stream::Stream &) const;
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
      extern PyType_Def PY_TYPE_DEF(PythonFieldTimeInterpolator);
      extern PyTypeObject *PY_TYPE(PythonFieldTimeInterpolator);

      class t_PythonFieldTimeInterpolator {
      public:
        PyObject_HEAD
        PythonFieldTimeInterpolator object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_PythonFieldTimeInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldTimeInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldTimeInterpolator&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
