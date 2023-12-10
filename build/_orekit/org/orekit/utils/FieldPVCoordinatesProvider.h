#ifndef org_orekit_utils_FieldPVCoordinatesProvider_H
#define org_orekit_utils_FieldPVCoordinatesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldPVCoordinatesProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getPVCoordinates_2cdae1c350dc3e9a,
          mid_getPosition_edb3d4e7c6d4d2e6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldPVCoordinatesProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldPVCoordinatesProvider(const FieldPVCoordinatesProvider& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldPVCoordinatesProvider);
      extern PyTypeObject *PY_TYPE(FieldPVCoordinatesProvider);

      class t_FieldPVCoordinatesProvider {
      public:
        PyObject_HEAD
        FieldPVCoordinatesProvider object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldPVCoordinatesProvider *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldPVCoordinatesProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldPVCoordinatesProvider&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
