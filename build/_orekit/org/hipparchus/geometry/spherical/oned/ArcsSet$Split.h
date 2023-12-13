#ifndef org_hipparchus_geometry_spherical_oned_ArcsSet$Split_H
#define org_hipparchus_geometry_spherical_oned_ArcsSet$Split_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Side;
      }
      namespace spherical {
        namespace oned {
          class Sphere1D;
          class ArcsSet;
        }
      }
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
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          class ArcsSet$Split : public ::java::lang::Object {
           public:
            enum {
              mid_getMinus_7d64add151265ba7,
              mid_getPlus_7d64add151265ba7,
              mid_getSide_e46f65835b705175,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArcsSet$Split(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ArcsSet$Split(const ArcsSet$Split& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::geometry::spherical::oned::ArcsSet getMinus() const;
            ::org::hipparchus::geometry::spherical::oned::ArcsSet getPlus() const;
            ::org::hipparchus::geometry::partitioning::Side getSide() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(ArcsSet$Split);
          extern PyTypeObject *PY_TYPE(ArcsSet$Split);

          class t_ArcsSet$Split {
          public:
            PyObject_HEAD
            ArcsSet$Split object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_ArcsSet$Split *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ArcsSet$Split&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ArcsSet$Split&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
