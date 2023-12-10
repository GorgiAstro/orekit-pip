#ifndef org_hipparchus_geometry_euclidean_threed_OutlineExtractor_H
#define org_hipparchus_geometry_euclidean_threed_OutlineExtractor_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
        }
        namespace threed {
          class PolyhedronsSet;
          class Vector3D;
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
      namespace euclidean {
        namespace threed {

          class OutlineExtractor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_bedd188d9f399c34,
              mid_getOutline_991374efd77c756f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OutlineExtractor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OutlineExtractor(const OutlineExtractor& obj) : ::java::lang::Object(obj) {}

            OutlineExtractor(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > getOutline(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet &) const;
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
          extern PyType_Def PY_TYPE_DEF(OutlineExtractor);
          extern PyTypeObject *PY_TYPE(OutlineExtractor);

          class t_OutlineExtractor {
          public:
            PyObject_HEAD
            OutlineExtractor object;
            static PyObject *wrap_Object(const OutlineExtractor&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
