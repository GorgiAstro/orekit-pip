#ifndef org_orekit_models_earth_Geoid_H
#define org_orekit_models_earth_Geoid_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class ReferenceEllipsoid;
        class EarthShape;
      }
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class NormalizedSphericalHarmonicsProvider;
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace bodies {
      class FieldGeodeticPoint;
      class GeodeticPoint;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldLine;
          class FieldVector3D;
          class Vector3D;
          class Line;
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
  namespace orekit {
    namespace models {
      namespace earth {

        class Geoid : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3e46faf0843f94b0,
            mid_getBodyFrame_b86f9f61d97a7244,
            mid_getEllipsoid_eead5b864957d48b,
            mid_getIntersectionPoint_e81d59d1bc381e5e,
            mid_getIntersectionPoint_ec4b828b0bd3964b,
            mid_getUndulation_51525816d9b1365b,
            mid_projectToGround_7ddc39790e3dd04b,
            mid_projectToGround_73ba258c5f91e9db,
            mid_transform_5f1451dffd8cde56,
            mid_transform_6cf64433187e46c3,
            mid_transform_e019f2426bfb11d5,
            mid_transform_dd18b1b42137f809,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Geoid(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Geoid(const Geoid& obj) : ::java::lang::Object(obj) {}

          Geoid(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider &, const ::org::orekit::models::earth::ReferenceEllipsoid &);

          ::org::orekit::frames::Frame getBodyFrame() const;
          ::org::orekit::models::earth::ReferenceEllipsoid getEllipsoid() const;
          ::org::orekit::bodies::FieldGeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::bodies::GeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
          jdouble getUndulation(jdouble, jdouble, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeStampedPVCoordinates projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transform(const ::org::orekit::bodies::FieldGeodeticPoint &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D transform(const ::org::orekit::bodies::GeodeticPoint &) const;
          ::org::orekit::bodies::FieldGeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::bodies::GeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        extern PyType_Def PY_TYPE_DEF(Geoid);
        extern PyTypeObject *PY_TYPE(Geoid);

        class t_Geoid {
        public:
          PyObject_HEAD
          Geoid object;
          static PyObject *wrap_Object(const Geoid&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
