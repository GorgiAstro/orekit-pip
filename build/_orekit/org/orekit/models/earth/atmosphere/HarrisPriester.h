#ifndef org_orekit_models_earth_atmosphere_HarrisPriester_H
#define org_orekit_models_earth_atmosphere_HarrisPriester_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
    namespace utils {
      class PVCoordinatesProvider;
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
        namespace atmosphere {

          class HarrisPriester : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0a5b2718e0997f3a,
              mid_init$_510722e30ff1bdf0,
              mid_init$_f206e82e75dbd58d,
              mid_init$_fbb4ef6954d0be48,
              mid_getDensity_7e4981d8fe7bfeef,
              mid_getDensity_5fd980386f9c0459,
              mid_getDensity_e3f5c4474b151066,
              mid_getDensity_ee5ac6667b0d4b90,
              mid_getFrame_c8fe21bcdac65bf6,
              mid_getMaxAlt_456d9a2f64d6b28d,
              mid_getMinAlt_456d9a2f64d6b28d,
              mid_getTabDensity_43de1192439efa92,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HarrisPriester(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HarrisPriester(const HarrisPriester& obj) : ::java::lang::Object(obj) {}

            HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &);
            HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, const JArray< JArray< jdouble > > &);
            HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);
            HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, const JArray< JArray< jdouble > > &, jdouble);

            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
            jdouble getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
            jdouble getDensity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::frames::Frame getFrame() const;
            jdouble getMaxAlt() const;
            jdouble getMinAlt() const;
            JArray< JArray< jdouble > > getTabDensity() const;
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
        namespace atmosphere {
          extern PyType_Def PY_TYPE_DEF(HarrisPriester);
          extern PyTypeObject *PY_TYPE(HarrisPriester);

          class t_HarrisPriester {
          public:
            PyObject_HEAD
            HarrisPriester object;
            static PyObject *wrap_Object(const HarrisPriester&);
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
