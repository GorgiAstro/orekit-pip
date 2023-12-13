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
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace frames {
      class Frame;
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
              mid_init$_d5c8b1824fbf91f0,
              mid_init$_230a9059691aacfa,
              mid_init$_d475a351bb1fadbf,
              mid_init$_c2d4d65daa179eba,
              mid_getDensity_b71939b8275fb620,
              mid_getDensity_4d0eb4d30dbd9ad9,
              mid_getDensity_58866e32a1c9318b,
              mid_getDensity_e9a4fc2340b58984,
              mid_getFrame_2c51111cc6894ba1,
              mid_getMaxAlt_b74f83833fdad017,
              mid_getMinAlt_b74f83833fdad017,
              mid_getTabDensity_3b7b373db8e7887f,
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
            jdouble getDensity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
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
