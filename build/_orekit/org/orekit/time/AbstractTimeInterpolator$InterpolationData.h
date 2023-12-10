#ifndef org_orekit_time_AbstractTimeInterpolator$InterpolationData_H
#define org_orekit_time_AbstractTimeInterpolator$InterpolationData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ImmutableTimeStampedCache;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class AbstractTimeInterpolator$InterpolationData : public ::java::lang::Object {
       public:
        enum {
          mid_getCachedSamples_6750a7a81e7b6495,
          mid_getInterpolationDate_85703d13e302437e,
          mid_getNeighborList_2afa36052df4765d,
          mid_getCentralDate_359d74440de34909,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractTimeInterpolator$InterpolationData(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractTimeInterpolator$InterpolationData(const AbstractTimeInterpolator$InterpolationData& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::utils::ImmutableTimeStampedCache getCachedSamples() const;
        ::org::orekit::time::AbsoluteDate getInterpolationDate() const;
        ::java::util::List getNeighborList() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(AbstractTimeInterpolator$InterpolationData);
      extern PyTypeObject *PY_TYPE(AbstractTimeInterpolator$InterpolationData);

      class t_AbstractTimeInterpolator$InterpolationData {
      public:
        PyObject_HEAD
        AbstractTimeInterpolator$InterpolationData object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractTimeInterpolator$InterpolationData *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractTimeInterpolator$InterpolationData&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractTimeInterpolator$InterpolationData&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
