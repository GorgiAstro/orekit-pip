#ifndef org_hipparchus_geometry_LocalizedGeometryFormats_H
#define org_hipparchus_geometry_LocalizedGeometryFormats_H

#include "java/lang/Enum.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      class LocalizedGeometryFormats;
    }
    namespace exception {
      class Localizable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {

      class LocalizedGeometryFormats : public ::java::lang::Enum {
       public:
        enum {
          mid_getLocalizedString_26070c28e6ea354d,
          mid_getSourceString_1c1fa1e935d6cdcf,
          mid_valueOf_caa6b78ce82a35d8,
          mid_values_ea6a946c0203fef0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LocalizedGeometryFormats(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LocalizedGeometryFormats(const LocalizedGeometryFormats& obj) : ::java::lang::Enum(obj) {}

        static LocalizedGeometryFormats *CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR;
        static LocalizedGeometryFormats *CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT;
        static LocalizedGeometryFormats *CLOSE_VERTICES;
        static LocalizedGeometryFormats *CROSSING_BOUNDARY_LOOPS;
        static LocalizedGeometryFormats *EDGE_CONNECTED_TO_ONE_FACET;
        static LocalizedGeometryFormats *FACET_ORIENTATION_MISMATCH;
        static LocalizedGeometryFormats *FACET_WITH_SEVERAL_BOUNDARY_LOOPS;
        static LocalizedGeometryFormats *INCONSISTENT_STATE_AT_2_PI_WRAPPING;
        static LocalizedGeometryFormats *INVALID_ROTATION_ORDER_NAME;
        static LocalizedGeometryFormats *NON_INVERTIBLE_TRANSFORM;
        static LocalizedGeometryFormats *NOT_CONVEX;
        static LocalizedGeometryFormats *NOT_CONVEX_HYPERPLANES;
        static LocalizedGeometryFormats *NOT_SUPPORTED_IN_DIMENSION_N;
        static LocalizedGeometryFormats *OUTLINE_BOUNDARY_LOOP_OPEN;
        static LocalizedGeometryFormats *OUT_OF_PLANE;
        static LocalizedGeometryFormats *ROTATION_MATRIX_DIMENSIONS;
        static LocalizedGeometryFormats *TOO_SMALL_TOLERANCE;
        static LocalizedGeometryFormats *UNABLE_TO_ORTHOGONOLIZE_MATRIX;
        static LocalizedGeometryFormats *ZERO_NORM_FOR_ROTATION_AXIS;
        static LocalizedGeometryFormats *ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR;

        ::java::lang::String getLocalizedString(const ::java::util::Locale &) const;
        ::java::lang::String getSourceString() const;
        static LocalizedGeometryFormats valueOf(const ::java::lang::String &);
        static JArray< LocalizedGeometryFormats > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      extern PyType_Def PY_TYPE_DEF(LocalizedGeometryFormats);
      extern PyTypeObject *PY_TYPE(LocalizedGeometryFormats);

      class t_LocalizedGeometryFormats {
      public:
        PyObject_HEAD
        LocalizedGeometryFormats object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LocalizedGeometryFormats *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LocalizedGeometryFormats&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LocalizedGeometryFormats&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
