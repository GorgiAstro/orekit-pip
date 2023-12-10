#ifndef org_orekit_models_earth_tessellation_EllipsoidTessellator_H
#define org_orekit_models_earth_tessellation_EllipsoidTessellator_H

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
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          class TileAiming;
          class Tile;
        }
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class SphericalPolygonsSet;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          class EllipsoidTessellator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_77f1a5dfde5d9334,
              mid_buildSimpleZone_e0cdac0f8844a597,
              mid_buildSimpleZone_90b26b8ccdda699d,
              mid_sample_8281c4d2cd40ce62,
              mid_tessellate_23b10122fe29aea8,
              mid_toGeodetic_1b240fc4f889c389,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EllipsoidTessellator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EllipsoidTessellator(const EllipsoidTessellator& obj) : ::java::lang::Object(obj) {}

            EllipsoidTessellator(const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::models::earth::tessellation::TileAiming &, jint);

            static ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet buildSimpleZone(jdouble, const JArray< ::org::orekit::bodies::GeodeticPoint > &);
            static ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet buildSimpleZone(jdouble, const JArray< JArray< jdouble > > &);
            ::java::util::List sample(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet &, jdouble, jdouble) const;
            ::java::util::List tessellate(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet &, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          extern PyType_Def PY_TYPE_DEF(EllipsoidTessellator);
          extern PyTypeObject *PY_TYPE(EllipsoidTessellator);

          class t_EllipsoidTessellator {
          public:
            PyObject_HEAD
            EllipsoidTessellator object;
            static PyObject *wrap_Object(const EllipsoidTessellator&);
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
