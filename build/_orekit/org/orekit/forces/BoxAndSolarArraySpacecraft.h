#ifndef org_orekit_forces_BoxAndSolarArraySpacecraft_H
#define org_orekit_forces_BoxAndSolarArraySpacecraft_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      class Panel;
      namespace drag {
        class DragSensitive;
      }
      namespace radiation {
        class RadiationSensitive;
      }
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
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
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {

      class BoxAndSolarArraySpacecraft : public ::java::lang::Object {
       public:
        enum {
          mid_init$_aa335fea495d60e0,
          mid_init$_30e355b97c9283c7,
          mid_buildBox_cc97e73ecd766053,
          mid_buildPanels_59acc07da4226951,
          mid_dragAcceleration_73bcdbeb8ff641bb,
          mid_dragAcceleration_4a6ab2502c320936,
          mid_getDragParametersDrivers_d751c1a57012b438,
          mid_getPanels_d751c1a57012b438,
          mid_getRadiationParametersDrivers_d751c1a57012b438,
          mid_radiationPressureAcceleration_8ba97ba2fcb659fc,
          mid_radiationPressureAcceleration_b5d2cc91db5ad4cb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BoxAndSolarArraySpacecraft(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BoxAndSolarArraySpacecraft(const BoxAndSolarArraySpacecraft& obj) : ::java::lang::Object(obj) {}

        BoxAndSolarArraySpacecraft(const ::java::util::List &);
        BoxAndSolarArraySpacecraft(jdouble, jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble, jdouble);

        static ::java::util::List buildBox(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
        static ::java::util::List buildPanels(jdouble, jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble, jdouble);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D dragAcceleration(const ::org::orekit::propagation::SpacecraftState &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::java::util::List getDragParametersDrivers() const;
        ::java::util::List getPanels() const;
        ::java::util::List getRadiationParametersDrivers() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      extern PyType_Def PY_TYPE_DEF(BoxAndSolarArraySpacecraft);
      extern PyTypeObject *PY_TYPE(BoxAndSolarArraySpacecraft);

      class t_BoxAndSolarArraySpacecraft {
      public:
        PyObject_HEAD
        BoxAndSolarArraySpacecraft object;
        static PyObject *wrap_Object(const BoxAndSolarArraySpacecraft&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
