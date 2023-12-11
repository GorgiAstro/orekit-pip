#ifndef org_orekit_models_earth_atmosphere_HarrisPriester_H
#define org_orekit_models_earth_atmosphere_HarrisPriester_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
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
        namespace atmosphere {

          class HarrisPriester : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ba2837ebacb842b1,
              mid_init$_b65c475fba40cde4,
              mid_init$_e522dd141110feeb,
              mid_init$_2852904c6199ecb5,
              mid_getDensity_b464f829e6652655,
              mid_getDensity_80610bac160dfa0e,
              mid_getDensity_57dd506d2d9ba196,
              mid_getDensity_818999d9e7960fd1,
              mid_getFrame_6c9bc0a928c56d4e,
              mid_getMaxAlt_557b8123390d8d0c,
              mid_getMinAlt_557b8123390d8d0c,
              mid_getTabDensity_8cf5267aa13a77f3,
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
