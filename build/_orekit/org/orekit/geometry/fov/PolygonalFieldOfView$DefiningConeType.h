#ifndef org_orekit_geometry_fov_PolygonalFieldOfView$DefiningConeType_H
#define org_orekit_geometry_fov_PolygonalFieldOfView$DefiningConeType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        class PolygonalFieldOfView$DefiningConeType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        class PolygonalFieldOfView$DefiningConeType : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_1e6b864dc48b987d,
            mid_values_a0f61bfb90a5f891,
            mid_verticesRadius_988810e80d644418,
            mid_createVertex_763682734669ebe3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolygonalFieldOfView$DefiningConeType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolygonalFieldOfView$DefiningConeType(const PolygonalFieldOfView$DefiningConeType& obj) : ::java::lang::Enum(obj) {}

          static PolygonalFieldOfView$DefiningConeType *INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE;
          static PolygonalFieldOfView$DefiningConeType *OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES;

          static PolygonalFieldOfView$DefiningConeType valueOf(const ::java::lang::String &);
          static JArray< PolygonalFieldOfView$DefiningConeType > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        extern PyType_Def PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType);
        extern PyTypeObject *PY_TYPE(PolygonalFieldOfView$DefiningConeType);

        class t_PolygonalFieldOfView$DefiningConeType {
        public:
          PyObject_HEAD
          PolygonalFieldOfView$DefiningConeType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PolygonalFieldOfView$DefiningConeType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PolygonalFieldOfView$DefiningConeType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PolygonalFieldOfView$DefiningConeType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
