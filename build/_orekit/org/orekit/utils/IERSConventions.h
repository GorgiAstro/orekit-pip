#ifndef org_orekit_utils_IERSConventions_H
#define org_orekit_utils_IERSConventions_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeVectorFunction;
      class FieldAbsoluteDate;
      class TimeScalarFunction;
      class TimeScales;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
      class LoveNumbers;
      class IERSConventions;
    }
    namespace frames {
      class EOPHistory;
    }
    namespace data {
      class PoissonSeries$CompiledSeries;
      class FundamentalNutationArguments;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class IERSConventions : public ::java::lang::Enum {
       public:
        enum {
          mid_evaluateTC_b0b988f941da47d8,
          mid_evaluateTC_b884068a2c99f6ca,
          mid_evaluateTC_afadb93117a91cf2,
          mid_evaluateTC_c40527712cc30fd1,
          mid_getEOPTidalCorrection_b02468de716866b4,
          mid_getEOPTidalCorrection_a94f012293f7f4b2,
          mid_getEarthOrientationAngleFunction_784463606954bfa7,
          mid_getEarthOrientationAngleFunction_3e34b3a99275c31a,
          mid_getGASTFunction_4a023417c19b9473,
          mid_getGASTFunction_f07e9d6f5265aad9,
          mid_getGMSTFunction_784463606954bfa7,
          mid_getGMSTFunction_8903ace4b49f0e54,
          mid_getGMSTRateFunction_784463606954bfa7,
          mid_getGMSTRateFunction_8903ace4b49f0e54,
          mid_getLoveNumbers_a9df4cfa6ee57f12,
          mid_getMeanObliquityFunction_a972ac0ab6da9ec1,
          mid_getMeanObliquityFunction_a61297b447dbba8e,
          mid_getNominalTidalDisplacement_a53a7513ecedada2,
          mid_getNutationArguments_57a5edd5dc7498d8,
          mid_getNutationArguments_c364e89eb2d3ab86,
          mid_getNutationCorrectionConverter_960af55dff8aba2e,
          mid_getNutationCorrectionConverter_7010f229a93dbb70,
          mid_getNutationFunction_b02468de716866b4,
          mid_getNutationFunction_a94f012293f7f4b2,
          mid_getNutationReferenceEpoch_7a97f7e149e79afb,
          mid_getNutationReferenceEpoch_8de65d6ed0f5ceba,
          mid_getOceanPoleTide_0a7ff33fcbeaa3c8,
          mid_getPermanentTide_557b8123390d8d0c,
          mid_getPrecessionFunction_b02468de716866b4,
          mid_getPrecessionFunction_a94f012293f7f4b2,
          mid_getSolidPoleTide_0a7ff33fcbeaa3c8,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_400994325d6e2733,
          mid_getTidalDisplacementFrequencyCorrectionZonal_400994325d6e2733,
          mid_getTideFrequencyDependenceFunction_35cfab1ad1c0cc40,
          mid_getTideFrequencyDependenceFunction_6f9a6c351b205bd8,
          mid_getXYSpXY2Function_b02468de716866b4,
          mid_getXYSpXY2Function_a94f012293f7f4b2,
          mid_valueOf_63ad83029409cd4f,
          mid_values_a7ec554e9bd0f016,
          mid_getNutationArguments_fe8e5b508ab40d8c,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_d8b69ba2f66d7675,
          mid_getTidalDisplacementFrequencyCorrectionZonal_d8b69ba2f66d7675,
          mid_loadLoveNumbers_b1eecaa531085753,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IERSConventions(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IERSConventions(const IERSConventions& obj) : ::java::lang::Enum(obj) {}

        static IERSConventions *IERS_1996;
        static IERSConventions *IERS_2003;
        static IERSConventions *IERS_2010;

        jdouble evaluateTC(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement evaluateTC(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble evaluateTC(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::TimeScales &) const;
        ::org::hipparchus::CalculusFieldElement evaluateTC(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getEOPTidalCorrection() const;
        ::org::orekit::time::TimeVectorFunction getEOPTidalCorrection(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeScalarFunction getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getGASTFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::EOPHistory &) const;
        ::org::orekit::time::TimeScalarFunction getGASTFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::EOPHistory &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTRateFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTRateFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::utils::LoveNumbers getLoveNumbers() const;
        ::org::orekit::time::TimeScalarFunction getMeanObliquityFunction() const;
        ::org::orekit::time::TimeScalarFunction getMeanObliquityFunction(const ::org::orekit::time::TimeScales &) const;
        JArray< jdouble > getNominalTidalDisplacement() const;
        ::org::orekit::data::FundamentalNutationArguments getNutationArguments(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::data::FundamentalNutationArguments getNutationArguments(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter getNutationCorrectionConverter() const;
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter getNutationCorrectionConverter(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getNutationFunction() const;
        ::org::orekit::time::TimeVectorFunction getNutationFunction(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::AbsoluteDate getNutationReferenceEpoch() const;
        ::org::orekit::time::AbsoluteDate getNutationReferenceEpoch(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getOceanPoleTide(const ::org::orekit::frames::EOPHistory &) const;
        jdouble getPermanentTide() const;
        ::org::orekit::time::TimeVectorFunction getPrecessionFunction() const;
        ::org::orekit::time::TimeVectorFunction getPrecessionFunction(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getSolidPoleTide(const ::org::orekit::frames::EOPHistory &) const;
        ::org::orekit::data::PoissonSeries$CompiledSeries getTidalDisplacementFrequencyCorrectionDiurnal() const;
        ::org::orekit::data::PoissonSeries$CompiledSeries getTidalDisplacementFrequencyCorrectionZonal() const;
        ::org::orekit::time::TimeVectorFunction getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeVectorFunction getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getXYSpXY2Function() const;
        ::org::orekit::time::TimeVectorFunction getXYSpXY2Function(const ::org::orekit::time::TimeScales &) const;
        static IERSConventions valueOf(const ::java::lang::String &);
        static JArray< IERSConventions > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(IERSConventions);
      extern PyTypeObject *PY_TYPE(IERSConventions);

      class t_IERSConventions {
      public:
        PyObject_HEAD
        IERSConventions object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_IERSConventions *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const IERSConventions&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const IERSConventions&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
