#ifndef org_hipparchus_geometry_euclidean_threed_PolyhedronsSet$BRep_H
#define org_hipparchus_geometry_euclidean_threed_PolyhedronsSet$BRep_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Euclidean2D;
        }
        namespace threed {
          class Euclidean3D;
          class Vector3D;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          class PolyhedronsSet$BRep : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a7e27987d82c9ab2,
              mid_getFacets_d751c1a57012b438,
              mid_getVertices_d751c1a57012b438,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PolyhedronsSet$BRep(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PolyhedronsSet$BRep(const PolyhedronsSet$BRep& obj) : ::java::lang::Object(obj) {}

            PolyhedronsSet$BRep(const ::java::util::List &, const ::java::util::List &);

            ::java::util::List getFacets() const;
            ::java::util::List getVertices() const;
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
      namespace euclidean {
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(PolyhedronsSet$BRep);
          extern PyTypeObject *PY_TYPE(PolyhedronsSet$BRep);

          class t_PolyhedronsSet$BRep {
          public:
            PyObject_HEAD
            PolyhedronsSet$BRep object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PolyhedronsSet$BRep *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PolyhedronsSet$BRep&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PolyhedronsSet$BRep&, PyTypeObject *, PyTypeObject *);
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
