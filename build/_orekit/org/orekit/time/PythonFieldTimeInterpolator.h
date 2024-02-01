#ifndef org_orekit_time_PythonFieldTimeInterpolator_H
#define org_orekit_time_PythonFieldTimeInterpolator_H

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
      class FieldTimeStamped;
      class FieldAbsoluteDate;
      class FieldTimeInterpolator;
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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getExtrapolationThreshold_9981f74b2d109da6,
          mid_getNbInterpolationPoints_d6ab429752e7c267,
          mid_getSubInterpolators_d751c1a57012b438,
          mid_interpolate_6042ab31a60ab114,
          mid_interpolate_cebe555f260562be,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
