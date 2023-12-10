#ifndef org_orekit_models_earth_atmosphere_HarrisPriester_H
#define org_orekit_models_earth_atmosphere_HarrisPriester_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace bodies {
      class OneAxisEllipsoid;
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
              mid_init$_66b28f080fa271fc,
              mid_init$_ab4c033fbcb06e60,
              mid_init$_d9fceafc8418f6bc,
              mid_init$_2cc741a8331eec3e,
              mid_getDensity_659f5a2caf346aee,
              mid_getDensity_2814c71be939a588,
              mid_getDensity_f7d7785230311c38,
              mid_getDensity_b79d75c1a8af7374,
              mid_getFrame_b86f9f61d97a7244,
              mid_getMaxAlt_dff5885c2c873297,
              mid_getMinAlt_dff5885c2c873297,
              mid_getTabDensity_0358d8ea02f2cdb1,
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
