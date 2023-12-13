#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIScale::class$ = NULL;
      jmethodID *TAIScale::mids$ = NULL;
      bool TAIScale::live$ = false;

      jclass TAIScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TAIScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble TAIScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TAIScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble TAIScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String TAIScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TAIScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIScale_getName(t_TAIScale *self);
      static PyObject *t_TAIScale_offsetFromTAI(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_offsetToTAI(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_toString(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_get__name(t_TAIScale *self, void *data);
      static PyGetSetDef t_TAIScale__fields_[] = {
        DECLARE_GET_FIELD(t_TAIScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TAIScale__methods_[] = {
        DECLARE_METHOD(t_TAIScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TAIScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TAIScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_TAIScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIScale)[] = {
        { Py_tp_methods, t_TAIScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TAIScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TAIScale, t_TAIScale, TAIScale);

      void t_TAIScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIScale), &PY_TYPE_DEF(TAIScale), module, "TAIScale", 0);
      }

      void t_TAIScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "class_", make_descriptor(TAIScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "wrapfn_", make_descriptor(t_TAIScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TAIScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIScale::initializeClass, 1)))
          return NULL;
        return t_TAIScale::wrap_Object(TAIScale(((t_TAIScale *) arg)->object.this$));
      }
      static PyObject *t_TAIScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TAIScale_getName(t_TAIScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TAIScale_offsetFromTAI(t_TAIScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TAIScale_offsetToTAI(t_TAIScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_TAIScale_toString(t_TAIScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TAIScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TAIScale_get__name(t_TAIScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTJ2SquaredClosedForm::class$ = NULL;
            jmethodID *DSSTJ2SquaredClosedForm::mids$ = NULL;
            bool DSSTJ2SquaredClosedForm::live$ = false;

            jclass DSSTJ2SquaredClosedForm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0c7dbee490690b42] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getMeanElementRate_7d3eb19aa1e75a63] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_0483a0f94731abef] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_3144241334d46411] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_5401e749436ec3b7] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedForm::DSSTJ2SquaredClosedForm(const ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0c7dbee490690b42, a0.this$, a1.this$)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_7d3eb19aa1e75a63], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_0483a0f94731abef], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_3144241334d46411], a0.this$, a1.this$, a2.this$));
            }

            void DSSTJ2SquaredClosedForm::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095], a0.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276], a0.this$, a1.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_5401e749436ec3b7], a0.this$, a1.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self);
            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data);
            static PyGetSetDef t_DSSTJ2SquaredClosedForm__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedForm, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTJ2SquaredClosedForm__methods_[] = {
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTJ2SquaredClosedForm)[] = {
              { Py_tp_methods, t_DSSTJ2SquaredClosedForm__methods_ },
              { Py_tp_init, (void *) t_DSSTJ2SquaredClosedForm_init_ },
              { Py_tp_getset, t_DSSTJ2SquaredClosedForm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTJ2SquaredClosedForm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTJ2SquaredClosedForm, t_DSSTJ2SquaredClosedForm, DSSTJ2SquaredClosedForm);

            void t_DSSTJ2SquaredClosedForm::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTJ2SquaredClosedForm), &PY_TYPE_DEF(DSSTJ2SquaredClosedForm), module, "DSSTJ2SquaredClosedForm", 0);
            }

            void t_DSSTJ2SquaredClosedForm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "class_", make_descriptor(DSSTJ2SquaredClosedForm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "wrapfn_", make_descriptor(t_DSSTJ2SquaredClosedForm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 1)))
                return NULL;
              return t_DSSTJ2SquaredClosedForm::wrap_Object(DSSTJ2SquaredClosedForm(((t_DSSTJ2SquaredClosedForm *) arg)->object.this$));
            }
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              DSSTJ2SquaredClosedForm object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTJ2SquaredClosedForm(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateSolver::class$ = NULL;
        jmethodID *AbstractUnivariateSolver::mids$ = NULL;
        bool AbstractUnivariateSolver::live$ = false;

        jclass AbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateSolver, t_AbstractUnivariateSolver, AbstractUnivariateSolver);
        PyObject *t_AbstractUnivariateSolver::wrap_Object(const AbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateSolver), &PY_TYPE_DEF(AbstractUnivariateSolver), module, "AbstractUnivariateSolver", 0);
        }

        void t_AbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "class_", make_descriptor(AbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateSolver::wrap_Object(AbstractUnivariateSolver(((t_AbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/MinSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/MinSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *MinSelector::class$ = NULL;
        jmethodID *MinSelector::mids$ = NULL;
        bool MinSelector::live$ = false;

        jclass MinSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/MinSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_66f0279de41aba24] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MinSelector;");
            mids$[mid_selectFirst_cd8da52a7e84190c] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MinSelector MinSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MinSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_66f0279de41aba24]));
        }

        jboolean MinSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_cd8da52a7e84190c], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        static PyObject *t_MinSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MinSelector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MinSelector_getInstance(PyTypeObject *type);
        static PyObject *t_MinSelector_selectFirst(t_MinSelector *self, PyObject *args);
        static PyObject *t_MinSelector_get__instance(t_MinSelector *self, void *data);
        static PyGetSetDef t_MinSelector__fields_[] = {
          DECLARE_GET_FIELD(t_MinSelector, instance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MinSelector__methods_[] = {
          DECLARE_METHOD(t_MinSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MinSelector)[] = {
          { Py_tp_methods, t_MinSelector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_MinSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MinSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(MinSelector, t_MinSelector, MinSelector);

        void t_MinSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(MinSelector), &PY_TYPE_DEF(MinSelector), module, "MinSelector", 0);
        }

        void t_MinSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "class_", make_descriptor(MinSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "wrapfn_", make_descriptor(t_MinSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MinSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MinSelector::initializeClass, 1)))
            return NULL;
          return t_MinSelector::wrap_Object(MinSelector(((t_MinSelector *) arg)->object.this$));
        }
        static PyObject *t_MinSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MinSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MinSelector_getInstance(PyTypeObject *type)
        {
          MinSelector result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::utils::MinSelector::getInstance());
          return t_MinSelector::wrap_Object(result);
        }

        static PyObject *t_MinSelector_selectFirst(t_MinSelector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MinSelector), (PyObject *) self, "selectFirst", args, 2);
        }

        static PyObject *t_MinSelector_get__instance(t_MinSelector *self, void *data)
        {
          MinSelector value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_MinSelector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeComponents::class$ = NULL;
      jmethodID *TimeComponents::mids$ = NULL;
      bool TimeComponents::live$ = false;
      TimeComponents *TimeComponents::H00 = NULL;
      TimeComponents *TimeComponents::H12 = NULL;

      jclass TimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_94fe8d9ffeb50676] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_fc9f2ca09fd05bd3] = env->getMethodID(cls, "<init>", "(IIDI)V");
          mids$[mid_compareTo_458f3cb5628c1643] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/TimeComponents;)I");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_formatUtcOffset_1c1fa1e935d6cdcf] = env->getMethodID(cls, "formatUtcOffset", "()Ljava/lang/String;");
          mids$[mid_fromSeconds_328567cdd967e3d5] = env->getStaticMethodID(cls, "fromSeconds", "(IDDI)Lorg/orekit/time/TimeComponents;");
          mids$[mid_getHour_55546ef6a647f39b] = env->getMethodID(cls, "getHour", "()I");
          mids$[mid_getMinute_55546ef6a647f39b] = env->getMethodID(cls, "getMinute", "()I");
          mids$[mid_getMinutesFromUTC_55546ef6a647f39b] = env->getMethodID(cls, "getMinutesFromUTC", "()I");
          mids$[mid_getSecond_b74f83833fdad017] = env->getMethodID(cls, "getSecond", "()D");
          mids$[mid_getSecondsInLocalDay_b74f83833fdad017] = env->getMethodID(cls, "getSecondsInLocalDay", "()D");
          mids$[mid_getSecondsInUTCDay_b74f83833fdad017] = env->getMethodID(cls, "getSecondsInUTCDay", "()D");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseTime_0600ccbc1d063951] = env->getStaticMethodID(cls, "parseTime", "(Ljava/lang/String;)Lorg/orekit/time/TimeComponents;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          H00 = new TimeComponents(env->getStaticObjectField(cls, "H00", "Lorg/orekit/time/TimeComponents;"));
          H12 = new TimeComponents(env->getStaticObjectField(cls, "H12", "Lorg/orekit/time/TimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeComponents::TimeComponents(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      TimeComponents::TimeComponents(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94fe8d9ffeb50676, a0, a1, a2)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fc9f2ca09fd05bd3, a0, a1, a2, a3)) {}

      jint TimeComponents::compareTo(const TimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_458f3cb5628c1643], a0.this$);
      }

      jboolean TimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      ::java::lang::String TimeComponents::formatUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_formatUtcOffset_1c1fa1e935d6cdcf]));
      }

      TimeComponents TimeComponents::fromSeconds(jint a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_fromSeconds_328567cdd967e3d5], a0, a1, a2, a3));
      }

      jint TimeComponents::getHour() const
      {
        return env->callIntMethod(this$, mids$[mid_getHour_55546ef6a647f39b]);
      }

      jint TimeComponents::getMinute() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinute_55546ef6a647f39b]);
      }

      jint TimeComponents::getMinutesFromUTC() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinutesFromUTC_55546ef6a647f39b]);
      }

      jdouble TimeComponents::getSecond() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecond_b74f83833fdad017]);
      }

      jdouble TimeComponents::getSecondsInLocalDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInLocalDay_b74f83833fdad017]);
      }

      jdouble TimeComponents::getSecondsInUTCDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInUTCDay_b74f83833fdad017]);
      }

      jint TimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      TimeComponents TimeComponents::parseTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseTime_0600ccbc1d063951], a0.this$));
      }

      ::java::lang::String TimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String TimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg);
      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data);
      static PyGetSetDef t_TimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_TimeComponents, hour),
        DECLARE_GET_FIELD(t_TimeComponents, minute),
        DECLARE_GET_FIELD(t_TimeComponents, minutesFromUTC),
        DECLARE_GET_FIELD(t_TimeComponents, second),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInLocalDay),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInUTCDay),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeComponents__methods_[] = {
        DECLARE_METHOD(t_TimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_TimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, formatUtcOffset, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, fromSeconds, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, getHour, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinute, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinutesFromUTC, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecond, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInLocalDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInUTCDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, parseTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, toStringWithoutUtcOffset, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeComponents)[] = {
        { Py_tp_methods, t_TimeComponents__methods_ },
        { Py_tp_init, (void *) t_TimeComponents_init_ },
        { Py_tp_getset, t_TimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeComponents, t_TimeComponents, TimeComponents);

      void t_TimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeComponents), &PY_TYPE_DEF(TimeComponents), module, "TimeComponents", 0);
      }

      void t_TimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "class_", make_descriptor(TimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "wrapfn_", make_descriptor(t_TimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H00", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H00)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H12", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H12)));
      }

      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeComponents::initializeClass, 1)))
          return NULL;
        return t_TimeComponents::wrap_Object(TimeComponents(((t_TimeComponents *) arg)->object.this$));
      }
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = TimeComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jint a3;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIDI", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg)
      {
        TimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", TimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.formatUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        jint a3;
        TimeComponents result((jobject) NULL);

        if (!parseArgs(args, "IDDI", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::fromSeconds(a0, a1, a2, a3));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fromSeconds", args);
        return NULL;
      }

      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getHour());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinute());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecond());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::parseTime(a0));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTime", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getHour());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinute());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecond());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldContinueOnEvent.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldContinueOnEvent::class$ = NULL;
          jmethodID *FieldContinueOnEvent::mids$ = NULL;
          bool FieldContinueOnEvent::live$ = false;

          jclass FieldContinueOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldContinueOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_839b1f3ec2c4fbf6] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldContinueOnEvent::FieldContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::ode::events::Action FieldContinueOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_839b1f3ec2c4fbf6], a0.this$, a1.this$, a2));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args);
          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args);
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data);
          static PyGetSetDef t_FieldContinueOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldContinueOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldContinueOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldContinueOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldContinueOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldContinueOnEvent)[] = {
            { Py_tp_methods, t_FieldContinueOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldContinueOnEvent_init_ },
            { Py_tp_getset, t_FieldContinueOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldContinueOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldContinueOnEvent, t_FieldContinueOnEvent, FieldContinueOnEvent);
          PyObject *t_FieldContinueOnEvent::wrap_Object(const FieldContinueOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldContinueOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldContinueOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldContinueOnEvent), &PY_TYPE_DEF(FieldContinueOnEvent), module, "FieldContinueOnEvent", 0);
          }

          void t_FieldContinueOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "class_", make_descriptor(FieldContinueOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "wrapfn_", make_descriptor(t_FieldContinueOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldContinueOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldContinueOnEvent::wrap_Object(FieldContinueOnEvent(((t_FieldContinueOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldContinueOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldContinueOnEvent object((jobject) NULL);

            INT_CALL(object = FieldContinueOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractEopLoader.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopLoader::class$ = NULL;
      jmethodID *AbstractEopLoader::mids$ = NULL;
      bool AbstractEopLoader::live$ = false;

      jclass AbstractEopLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_14b928924b2794ba] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Ljava/util/function/Supplier;)V");
          mids$[mid_getUtc_34d3bda0a8989e3e] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractEopLoader::AbstractEopLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::java::util::function::Supplier & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_14b928924b2794ba, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractEopLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractEopLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopLoader)[] = {
        { Py_tp_methods, t_AbstractEopLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractEopLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AbstractEopLoader, t_AbstractEopLoader, AbstractEopLoader);

      void t_AbstractEopLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopLoader), &PY_TYPE_DEF(AbstractEopLoader), module, "AbstractEopLoader", 0);
      }

      void t_AbstractEopLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "class_", make_descriptor(AbstractEopLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "wrapfn_", make_descriptor(t_AbstractEopLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractEopLoader::wrap_Object(AbstractEopLoader(((t_AbstractEopLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        ::java::util::function::Supplier a2((jobject) NULL);
        PyTypeObject **p2;
        AbstractEopLoader object((jobject) NULL);

        if (!parseArgs(args, "skK", ::org::orekit::data::DataProvidersManager::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &p2, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = AbstractEopLoader(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldRotation::class$ = NULL;
          jmethodID *FieldRotation::mids$ = NULL;
          bool FieldRotation::live$ = false;

          jclass FieldRotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldRotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e67380c15d7bb85a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_e970db82036444fd] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/CalculusFieldElement;D)V");
              mids$[mid_init$_d965f7261acd08d9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
              mids$[mid_init$_ba1bb984c580930b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_f3ce3a1fac668ea5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_31abe03686aee6c3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_78fbed7d6fa102fc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Z)V");
              mids$[mid_applyInverseTo_d0768944fb0b84ef] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_49157187b00e5904] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_21d5fadd2d5408be] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_356b02aa715afa02] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_3d107ab4a6dcd08d] = env->getMethodID(cls, "applyInverseTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_2d4b2d13ddc9fb6a] = env->getMethodID(cls, "applyInverseTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_8b37798c2ad7690e] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_1a804267ea91ac19] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_d0768944fb0b84ef] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_49157187b00e5904] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_21d5fadd2d5408be] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_356b02aa715afa02] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_3d107ab4a6dcd08d] = env->getMethodID(cls, "applyTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_2d4b2d13ddc9fb6a] = env->getMethodID(cls, "applyTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_8b37798c2ad7690e] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_1a804267ea91ac19] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_compose_eda9f6acf9a8318c] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_compose_8b72f7d6d24f121b] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_eda9f6acf9a8318c] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_8b72f7d6d24f121b] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_distance_a579456cc557b766] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngle_81520b552cb3fa26] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngles_39b23660f6d802e5] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAxis_c217c42bc03f34e5] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getIdentity_643bba172d42020e] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_getMatrix_34ce7b2f6a50059b] = env->getMethodID(cls, "getMatrix", "()[[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ0_81520b552cb3fa26] = env->getMethodID(cls, "getQ0", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ1_81520b552cb3fa26] = env->getMethodID(cls, "getQ1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ2_81520b552cb3fa26] = env->getMethodID(cls, "getQ2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ3_81520b552cb3fa26] = env->getMethodID(cls, "getQ3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_revert_1e54a5caa5199c2e] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_toRotation_ff298a39b3cae5da] = env->getMethodID(cls, "toRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e67380c15d7bb85a, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e970db82036444fd, a0.this$, a1)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d965f7261acd08d9, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ba1bb984c580930b, a0.this$, a1.this$, a2.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3ce3a1fac668ea5, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_31abe03686aee6c3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78fbed7d6fa102fc, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          FieldRotation FieldRotation::applyInverseTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_d0768944fb0b84ef], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_49157187b00e5904], a0.this$));
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_21d5fadd2d5408be], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_356b02aa715afa02], a0.this$));
          }

          void FieldRotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_3d107ab4a6dcd08d], a0.this$, a1.this$);
          }

          void FieldRotation::applyInverseTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_2d4b2d13ddc9fb6a], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_8b37798c2ad7690e], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_1a804267ea91ac19], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::applyTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_d0768944fb0b84ef], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_49157187b00e5904], a0.this$));
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_21d5fadd2d5408be], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_356b02aa715afa02], a0.this$));
          }

          void FieldRotation::applyTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_3d107ab4a6dcd08d], a0.this$, a1.this$);
          }

          void FieldRotation::applyTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_2d4b2d13ddc9fb6a], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyTo_8b37798c2ad7690e], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyTo_1a804267ea91ac19], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_eda9f6acf9a8318c], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_8b72f7d6d24f121b], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_eda9f6acf9a8318c], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_8b72f7d6d24f121b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::distance(const FieldRotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_a579456cc557b766], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getAngle() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAngle_81520b552cb3fa26]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldRotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAngles_39b23660f6d802e5], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxis_c217c42bc03f34e5], a0.this$));
          }

          FieldRotation FieldRotation::getIdentity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_643bba172d42020e], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldRotation::getMatrix() const
          {
            return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getMatrix_34ce7b2f6a50059b]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ0() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ0_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ1_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ2_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ3_81520b552cb3fa26]));
          }

          FieldRotation FieldRotation::revert() const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_revert_1e54a5caa5199c2e]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Rotation FieldRotation::toRotation() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_ff298a39b3cae5da]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args);
          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg);
          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self);
          static PyObject *t_FieldRotation_revert(t_FieldRotation *self);
          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self);
          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data);
          static PyGetSetDef t_FieldRotation__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRotation, angle),
            DECLARE_GET_FIELD(t_FieldRotation, matrix),
            DECLARE_GET_FIELD(t_FieldRotation, q0),
            DECLARE_GET_FIELD(t_FieldRotation, q1),
            DECLARE_GET_FIELD(t_FieldRotation, q2),
            DECLARE_GET_FIELD(t_FieldRotation, q3),
            DECLARE_GET_FIELD(t_FieldRotation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRotation__methods_[] = {
            DECLARE_METHOD(t_FieldRotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, getAxis, METH_O),
            DECLARE_METHOD(t_FieldRotation, getIdentity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, revert, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, toRotation, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRotation)[] = {
            { Py_tp_methods, t_FieldRotation__methods_ },
            { Py_tp_init, (void *) t_FieldRotation_init_ },
            { Py_tp_getset, t_FieldRotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRotation, t_FieldRotation, FieldRotation);
          PyObject *t_FieldRotation::wrap_Object(const FieldRotation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRotation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRotation::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRotation), &PY_TYPE_DEF(FieldRotation), module, "FieldRotation", 0);
          }

          void t_FieldRotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "class_", make_descriptor(FieldRotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "wrapfn_", make_descriptor(t_FieldRotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRotation::initializeClass, 1)))
              return NULL;
            return t_FieldRotation::wrap_Object(FieldRotation(((t_FieldRotation *) arg)->object.this$));
          }
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "[[KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                jboolean a4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyInverseTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args)
          {
            FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldRotation::initializeClass, FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::distance(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAngle());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::getIdentity(a0));
              return t_FieldRotation::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getIdentity", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ0());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_revert(t_FieldRotation *self)
          {
            FieldRotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldRotation::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.toRotation());
            return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
          }
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAngle());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ0());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ2());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ3());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSAlmanac::class$ = NULL;
            jmethodID *GPSAlmanac::mids$ = NULL;
            bool GPSAlmanac::live$ = false;

            jclass GPSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_55546ef6a647f39b] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSVN_55546ef6a647f39b] = env->getMethodID(cls, "getSVN", "()I");
                mids$[mid_getSatConfiguration_55546ef6a647f39b] = env->getMethodID(cls, "getSatConfiguration", "()I");
                mids$[mid_getSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_getTGD_b74f83833fdad017] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_55546ef6a647f39b] = env->getMethodID(cls, "getURA", "()I");
                mids$[mid_setHealth_44ed599e93e8a30c] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSVN_44ed599e93e8a30c] = env->getMethodID(cls, "setSVN", "(I)V");
                mids$[mid_setSatConfiguration_44ed599e93e8a30c] = env->getMethodID(cls, "setSatConfiguration", "(I)V");
                mids$[mid_setSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_8ba9fe7a847cecad] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setURA_44ed599e93e8a30c] = env->getMethodID(cls, "setURA", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSAlmanac::GPSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jint GPSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_55546ef6a647f39b]);
            }

            jint GPSAlmanac::getSVN() const
            {
              return env->callIntMethod(this$, mids$[mid_getSVN_55546ef6a647f39b]);
            }

            jint GPSAlmanac::getSatConfiguration() const
            {
              return env->callIntMethod(this$, mids$[mid_getSatConfiguration_55546ef6a647f39b]);
            }

            ::java::lang::String GPSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_1c1fa1e935d6cdcf]));
            }

            jdouble GPSAlmanac::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_b74f83833fdad017]);
            }

            jint GPSAlmanac::getURA() const
            {
              return env->callIntMethod(this$, mids$[mid_getURA_55546ef6a647f39b]);
            }

            void GPSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_44ed599e93e8a30c], a0);
            }

            void GPSAlmanac::setSVN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSVN_44ed599e93e8a30c], a0);
            }

            void GPSAlmanac::setSatConfiguration(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatConfiguration_44ed599e93e8a30c], a0);
            }

            void GPSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_734b91ac30d5f9b4], a0.this$);
            }

            void GPSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_8ba9fe7a847cecad], a0);
            }

            void GPSAlmanac::setURA(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_44ed599e93e8a30c], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self);
            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg);
            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data);
            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data);
            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data);
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_GPSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_GPSAlmanac, health),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, sVN),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, satConfiguration),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, source),
              DECLARE_SET_FIELD(t_GPSAlmanac, sqrtA),
              DECLARE_GET_FIELD(t_GPSAlmanac, tGD),
              DECLARE_GETSET_FIELD(t_GPSAlmanac, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GPSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GPSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSVN, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSatConfiguration, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, getURA, METH_NOARGS),
              DECLARE_METHOD(t_GPSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSVN, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSatConfiguration, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setSqrtA, METH_O),
              DECLARE_METHOD(t_GPSAlmanac, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSAlmanac)[] = {
              { Py_tp_methods, t_GPSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GPSAlmanac_init_ },
              { Py_tp_getset, t_GPSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(GPSAlmanac, t_GPSAlmanac, GPSAlmanac);

            void t_GPSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSAlmanac), &PY_TYPE_DEF(GPSAlmanac), module, "GPSAlmanac", 0);
            }

            void t_GPSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "class_", make_descriptor(GPSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "wrapfn_", make_descriptor(t_GPSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GPSAlmanac::wrap_Object(GPSAlmanac(((t_GPSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GPSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSAlmanac_init_(t_GPSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              GPSAlmanac object((jobject) NULL);

              INT_CALL(object = GPSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_GPSAlmanac_getHealth(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSVN(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSVN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSatConfiguration(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSatConfiguration());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_getSource(t_GPSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_GPSAlmanac_getTGD(t_GPSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GPSAlmanac_getURA(t_GPSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getURA());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GPSAlmanac_setHealth(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSVN(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSVN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSVN", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSatConfiguration(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSatConfiguration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSatConfiguration", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSource(t_GPSAlmanac *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSource", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setSqrtA(t_GPSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_setURA(t_GPSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_GPSAlmanac_get__health(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__health(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__sVN(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSVN());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__sVN(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSVN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sVN", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__satConfiguration(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSatConfiguration());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__satConfiguration(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSatConfiguration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "satConfiguration", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__source(t_GPSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_GPSAlmanac_set__source(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "source", arg);
              return -1;
            }

            static int t_GPSAlmanac_set__sqrtA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }

            static PyObject *t_GPSAlmanac_get__tGD(t_GPSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GPSAlmanac_get__uRA(t_GPSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getURA());
              return PyLong_FromLong((long) value);
            }
            static int t_GPSAlmanac_set__uRA(t_GPSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Acos.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Acos::class$ = NULL;
        jmethodID *Acos::mids$ = NULL;
        bool Acos::live$ = false;

        jclass Acos::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Acos");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acos::Acos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Acos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Acos_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Acos_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Acos_init_(t_Acos *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Acos_value(t_Acos *self, PyObject *args);

        static PyMethodDef t_Acos__methods_[] = {
          DECLARE_METHOD(t_Acos, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acos, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acos, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Acos)[] = {
          { Py_tp_methods, t_Acos__methods_ },
          { Py_tp_init, (void *) t_Acos_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Acos)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Acos, t_Acos, Acos);

        void t_Acos::install(PyObject *module)
        {
          installType(&PY_TYPE(Acos), &PY_TYPE_DEF(Acos), module, "Acos", 0);
        }

        void t_Acos::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "class_", make_descriptor(Acos::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "wrapfn_", make_descriptor(t_Acos::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Acos_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Acos::initializeClass, 1)))
            return NULL;
          return t_Acos::wrap_Object(Acos(((t_Acos *) arg)->object.this$));
        }
        static PyObject *t_Acos_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Acos::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Acos_init_(t_Acos *self, PyObject *args, PyObject *kwds)
        {
          Acos object((jobject) NULL);

          INT_CALL(object = Acos());
          self->object = object;

          return 0;
        }

        static PyObject *t_Acos_value(t_Acos *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "java/util/Map.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *ModelObserver::class$ = NULL;
        jmethodID *ModelObserver::mids$ = NULL;
        bool ModelObserver::live$ = false;

        jclass ModelObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/ModelObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_modelCalled_cc0ac39e38c56725] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ModelObserver::modelCalled(const JArray< ::org::orekit::orbits::Orbit > & a0, const ::java::util::Map & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_modelCalled_cc0ac39e38c56725], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {
        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args);

        static PyMethodDef t_ModelObserver__methods_[] = {
          DECLARE_METHOD(t_ModelObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, modelCalled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ModelObserver)[] = {
          { Py_tp_methods, t_ModelObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ModelObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ModelObserver, t_ModelObserver, ModelObserver);

        void t_ModelObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(ModelObserver), &PY_TYPE_DEF(ModelObserver), module, "ModelObserver", 0);
        }

        void t_ModelObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "class_", make_descriptor(ModelObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "wrapfn_", make_descriptor(t_ModelObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ModelObserver::initializeClass, 1)))
            return NULL;
          return t_ModelObserver::wrap_Object(ModelObserver(((t_ModelObserver *) arg)->object.this$));
        }
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ModelObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args)
        {
          JArray< ::org::orekit::orbits::Orbit > a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[kK", ::org::orekit::orbits::Orbit::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
          {
            OBJ_CALL(self->object.modelCalled(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "modelCalled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/StepsizeHelper.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *StepsizeHelper::class$ = NULL;
        jmethodID *StepsizeHelper::mids$ = NULL;
        bool StepsizeHelper::live$ = false;

        jclass StepsizeHelper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/StepsizeHelper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa31b8b89ee72c31] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_filterStep_93e5b8d135427e28] = env->getMethodID(cls, "filterStep", "(DZZ)D");
            mids$[mid_filterStep_5af7161b76f2a836] = env->getMethodID(cls, "filterStep", "(Lorg/hipparchus/CalculusFieldElement;ZZ)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDummyStepsize_b74f83833fdad017] = env->getMethodID(cls, "getDummyStepsize", "()D");
            mids$[mid_getInitialStep_b74f83833fdad017] = env->getMethodID(cls, "getInitialStep", "()D");
            mids$[mid_getMainSetDimension_55546ef6a647f39b] = env->getMethodID(cls, "getMainSetDimension", "()I");
            mids$[mid_getMaxStep_b74f83833fdad017] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_b74f83833fdad017] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_getRelativeTolerance_2afcbc21f4e57ab2] = env->getMethodID(cls, "getRelativeTolerance", "(I)D");
            mids$[mid_getTolerance_98e10c261c066ee7] = env->getMethodID(cls, "getTolerance", "(ID)D");
            mids$[mid_getTolerance_23984a6e38b0b1f2] = env->getMethodID(cls, "getTolerance", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setInitialStepSize_8ba9fe7a847cecad] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setMainSetDimension_44ed599e93e8a30c] = env->getMethodID(cls, "setMainSetDimension", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa31b8b89ee72c31, a0, a1, a2.this$, a3.this$)) {}

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

        jdouble StepsizeHelper::filterStep(jdouble a0, jboolean a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_filterStep_93e5b8d135427e28], a0, a1, a2);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::filterStep(const ::org::hipparchus::CalculusFieldElement & a0, jboolean a1, jboolean a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_filterStep_5af7161b76f2a836], a0.this$, a1, a2));
        }

        jdouble StepsizeHelper::getDummyStepsize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDummyStepsize_b74f83833fdad017]);
        }

        jdouble StepsizeHelper::getInitialStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInitialStep_b74f83833fdad017]);
        }

        jint StepsizeHelper::getMainSetDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getMainSetDimension_55546ef6a647f39b]);
        }

        jdouble StepsizeHelper::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_b74f83833fdad017]);
        }

        jdouble StepsizeHelper::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_b74f83833fdad017]);
        }

        jdouble StepsizeHelper::getRelativeTolerance(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeTolerance_2afcbc21f4e57ab2], a0);
        }

        jdouble StepsizeHelper::getTolerance(jint a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_98e10c261c066ee7], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::getTolerance(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTolerance_23984a6e38b0b1f2], a0, a1.this$));
        }

        void StepsizeHelper::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_8ba9fe7a847cecad], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data);
        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data);
        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data);
        static PyGetSetDef t_StepsizeHelper__fields_[] = {
          DECLARE_GET_FIELD(t_StepsizeHelper, dummyStepsize),
          DECLARE_GET_FIELD(t_StepsizeHelper, initialStep),
          DECLARE_SET_FIELD(t_StepsizeHelper, initialStepSize),
          DECLARE_GET_FIELD(t_StepsizeHelper, mainSetDimension),
          DECLARE_GET_FIELD(t_StepsizeHelper, maxStep),
          DECLARE_GET_FIELD(t_StepsizeHelper, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepsizeHelper__methods_[] = {
          DECLARE_METHOD(t_StepsizeHelper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, filterStep, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, getDummyStepsize, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getInitialStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMainSetDimension, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getRelativeTolerance, METH_O),
          DECLARE_METHOD(t_StepsizeHelper, getTolerance, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, setInitialStepSize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepsizeHelper)[] = {
          { Py_tp_methods, t_StepsizeHelper__methods_ },
          { Py_tp_init, (void *) t_StepsizeHelper_init_ },
          { Py_tp_getset, t_StepsizeHelper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepsizeHelper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepsizeHelper, t_StepsizeHelper, StepsizeHelper);

        void t_StepsizeHelper::install(PyObject *module)
        {
          installType(&PY_TYPE(StepsizeHelper), &PY_TYPE_DEF(StepsizeHelper), module, "StepsizeHelper", 0);
        }

        void t_StepsizeHelper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "class_", make_descriptor(StepsizeHelper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "wrapfn_", make_descriptor(t_StepsizeHelper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepsizeHelper::initializeClass, 1)))
            return NULL;
          return t_StepsizeHelper::wrap_Object(StepsizeHelper(((t_StepsizeHelper *) arg)->object.this$));
        }
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepsizeHelper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              jboolean a1;
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "DZZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jboolean a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "filterStep", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInitialStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMainSetDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getRelativeTolerance(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRelativeTolerance", arg);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTolerance", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInitialStep());
          return PyFloat_FromDouble((double) value);
        }

        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMainSetDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *GenericTimeStampedCache::class$ = NULL;
      jmethodID *GenericTimeStampedCache::mids$ = NULL;
      bool GenericTimeStampedCache::live$ = false;
      jint GenericTimeStampedCache::DEFAULT_CACHED_SLOTS_NUMBER = (jint) 0;

      jclass GenericTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/GenericTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3b3b184c420a6a62] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;)V");
          mids$[mid_init$_afe6b7a902b9406a] = env->getMethodID(cls, "<init>", "(IIDDLorg/orekit/utils/TimeStampedGenerator;D)V");
          mids$[mid_getEarliest_a63f3f151ca9e302] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getEntries_55546ef6a647f39b] = env->getMethodID(cls, "getEntries", "()I");
          mids$[mid_getGenerateCalls_55546ef6a647f39b] = env->getMethodID(cls, "getGenerateCalls", "()I");
          mids$[mid_getGenerator_2a7005c2a7bbbe6e] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/utils/TimeStampedGenerator;");
          mids$[mid_getGetNeighborsCalls_55546ef6a647f39b] = env->getMethodID(cls, "getGetNeighborsCalls", "()I");
          mids$[mid_getLatest_a63f3f151ca9e302] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_55546ef6a647f39b] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getMaxSlots_55546ef6a647f39b] = env->getMethodID(cls, "getMaxSlots", "()I");
          mids$[mid_getMaxSpan_b74f83833fdad017] = env->getMethodID(cls, "getMaxSpan", "()D");
          mids$[mid_getNeighbors_70177eb25c19b8d4] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_getNewSlotQuantumGap_b74f83833fdad017] = env->getMethodID(cls, "getNewSlotQuantumGap", "()D");
          mids$[mid_getSlots_55546ef6a647f39b] = env->getMethodID(cls, "getSlots", "()I");
          mids$[mid_getSlotsEvictions_55546ef6a647f39b] = env->getMethodID(cls, "getSlotsEvictions", "()I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_CACHED_SLOTS_NUMBER = env->getStaticIntField(cls, "DEFAULT_CACHED_SLOTS_NUMBER");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b3b184c420a6a62, a0, a1, a2, a3, a4.this$)) {}

      GenericTimeStampedCache::GenericTimeStampedCache(jint a0, jint a1, jdouble a2, jdouble a3, const ::org::orekit::utils::TimeStampedGenerator & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_afe6b7a902b9406a, a0, a1, a2, a3, a4.this$, a5)) {}

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_a63f3f151ca9e302]));
      }

      jint GenericTimeStampedCache::getEntries() const
      {
        return env->callIntMethod(this$, mids$[mid_getEntries_55546ef6a647f39b]);
      }

      jint GenericTimeStampedCache::getGenerateCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGenerateCalls_55546ef6a647f39b]);
      }

      ::org::orekit::utils::TimeStampedGenerator GenericTimeStampedCache::getGenerator() const
      {
        return ::org::orekit::utils::TimeStampedGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_2a7005c2a7bbbe6e]));
      }

      jint GenericTimeStampedCache::getGetNeighborsCalls() const
      {
        return env->callIntMethod(this$, mids$[mid_getGetNeighborsCalls_55546ef6a647f39b]);
      }

      ::org::orekit::time::TimeStamped GenericTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_a63f3f151ca9e302]));
      }

      jint GenericTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_55546ef6a647f39b]);
      }

      jint GenericTimeStampedCache::getMaxSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxSlots_55546ef6a647f39b]);
      }

      jdouble GenericTimeStampedCache::getMaxSpan() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxSpan_b74f83833fdad017]);
      }

      ::java::util::stream::Stream GenericTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_70177eb25c19b8d4], a0.this$, a1));
      }

      jdouble GenericTimeStampedCache::getNewSlotQuantumGap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNewSlotQuantumGap_b74f83833fdad017]);
      }

      jint GenericTimeStampedCache::getSlots() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlots_55546ef6a647f39b]);
      }

      jint GenericTimeStampedCache::getSlotsEvictions() const
      {
        return env->callIntMethod(this$, mids$[mid_getSlotsEvictions_55546ef6a647f39b]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_GenericTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GenericTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GenericTimeStampedCache_of_(t_GenericTimeStampedCache *self, PyObject *args);
      static int t_GenericTimeStampedCache_init_(t_GenericTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GenericTimeStampedCache_getEarliest(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getEntries(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGenerateCalls(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGenerator(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getGetNeighborsCalls(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getLatest(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxNeighborsSize(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxSlots(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getMaxSpan(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getNeighbors(t_GenericTimeStampedCache *self, PyObject *args);
      static PyObject *t_GenericTimeStampedCache_getNewSlotQuantumGap(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getSlots(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_getSlotsEvictions(t_GenericTimeStampedCache *self);
      static PyObject *t_GenericTimeStampedCache_get__earliest(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__entries(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__generateCalls(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__generator(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__getNeighborsCalls(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__latest(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxNeighborsSize(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxSlots(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__maxSpan(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__newSlotQuantumGap(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__slots(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__slotsEvictions(t_GenericTimeStampedCache *self, void *data);
      static PyObject *t_GenericTimeStampedCache_get__parameters_(t_GenericTimeStampedCache *self, void *data);
      static PyGetSetDef t_GenericTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, entries),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, generateCalls),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, generator),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, getNeighborsCalls),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxSlots),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, maxSpan),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, newSlotQuantumGap),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, slots),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, slotsEvictions),
        DECLARE_GET_FIELD(t_GenericTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GenericTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_GenericTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GenericTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GenericTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getEntries, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGenerateCalls, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGenerator, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getGetNeighborsCalls, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxSlots, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getMaxSpan, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getNeighbors, METH_VARARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getNewSlotQuantumGap, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getSlots, METH_NOARGS),
        DECLARE_METHOD(t_GenericTimeStampedCache, getSlotsEvictions, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GenericTimeStampedCache)[] = {
        { Py_tp_methods, t_GenericTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_GenericTimeStampedCache_init_ },
        { Py_tp_getset, t_GenericTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GenericTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GenericTimeStampedCache, t_GenericTimeStampedCache, GenericTimeStampedCache);
      PyObject *t_GenericTimeStampedCache::wrap_Object(const GenericTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_GenericTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_GenericTimeStampedCache *self = (t_GenericTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_GenericTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_GenericTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_GenericTimeStampedCache *self = (t_GenericTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_GenericTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(GenericTimeStampedCache), &PY_TYPE_DEF(GenericTimeStampedCache), module, "GenericTimeStampedCache", 0);
      }

      void t_GenericTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "class_", make_descriptor(GenericTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "wrapfn_", make_descriptor(t_GenericTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        env->getClass(GenericTimeStampedCache::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GenericTimeStampedCache), "DEFAULT_CACHED_SLOTS_NUMBER", make_descriptor(GenericTimeStampedCache::DEFAULT_CACHED_SLOTS_NUMBER));
      }

      static PyObject *t_GenericTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GenericTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_GenericTimeStampedCache::wrap_Object(GenericTimeStampedCache(((t_GenericTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_GenericTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GenericTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GenericTimeStampedCache_of_(t_GenericTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_GenericTimeStampedCache_init_(t_GenericTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::utils::TimeStampedGenerator a4((jobject) NULL);
            PyTypeObject **p4;
            GenericTimeStampedCache object((jobject) NULL);

            if (!parseArgs(args, "IIDDK", ::org::orekit::utils::TimeStampedGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_TimeStampedGenerator::parameters_))
            {
              INT_CALL(object = GenericTimeStampedCache(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::utils::TimeStampedGenerator a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            GenericTimeStampedCache object((jobject) NULL);

            if (!parseArgs(args, "IIDDKD", ::org::orekit::utils::TimeStampedGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_TimeStampedGenerator::parameters_, &a5))
            {
              INT_CALL(object = GenericTimeStampedCache(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GenericTimeStampedCache_getEarliest(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_GenericTimeStampedCache_getEntries(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEntries());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getGenerateCalls(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGenerateCalls());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getGenerator(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::utils::TimeStampedGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGenerator());
        return ::org::orekit::utils::t_TimeStampedGenerator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_GenericTimeStampedCache_getGetNeighborsCalls(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGetNeighborsCalls());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getLatest(t_GenericTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxNeighborsSize(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxSlots(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxSlots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getMaxSpan(t_GenericTimeStampedCache *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxSpan());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GenericTimeStampedCache_getNeighbors(t_GenericTimeStampedCache *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }

      static PyObject *t_GenericTimeStampedCache_getNewSlotQuantumGap(t_GenericTimeStampedCache *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNewSlotQuantumGap());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GenericTimeStampedCache_getSlots(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSlots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GenericTimeStampedCache_getSlotsEvictions(t_GenericTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSlotsEvictions());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_GenericTimeStampedCache_get__parameters_(t_GenericTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_GenericTimeStampedCache_get__earliest(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__entries(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEntries());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__generateCalls(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGenerateCalls());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__generator(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::utils::TimeStampedGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGenerator());
        return ::org::orekit::utils::t_TimeStampedGenerator::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__getNeighborsCalls(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGetNeighborsCalls());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__latest(t_GenericTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxNeighborsSize(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxSlots(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxSlots());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__maxSpan(t_GenericTimeStampedCache *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxSpan());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__newSlotQuantumGap(t_GenericTimeStampedCache *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNewSlotQuantumGap());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__slots(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSlots());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GenericTimeStampedCache_get__slotsEvictions(t_GenericTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSlotsEvictions());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenThirdBodyLinear::class$ = NULL;
              jmethodID *FieldHansenThirdBodyLinear::mids$ = NULL;
              bool FieldHansenThirdBodyLinear::live$ = false;

              jclass FieldHansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d406983711b212ac] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_baa1ed35ace5d036] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_23984a6e38b0b1f2] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_23984a6e38b0b1f2] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenThirdBodyLinear::FieldHansenThirdBodyLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d406983711b212ac, a0, a1, a2.this$)) {}

              void FieldHansenThirdBodyLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_baa1ed35ace5d036], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_23984a6e38b0b1f2], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_23984a6e38b0b1f2], a0, a1.this$));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data);
              static PyGetSetDef t_FieldHansenThirdBodyLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenThirdBodyLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_FieldHansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenThirdBodyLinear_init_ },
                { Py_tp_getset, t_FieldHansenThirdBodyLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenThirdBodyLinear, t_FieldHansenThirdBodyLinear, FieldHansenThirdBodyLinear);
              PyObject *t_FieldHansenThirdBodyLinear::wrap_Object(const FieldHansenThirdBodyLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenThirdBodyLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenThirdBodyLinear), &PY_TYPE_DEF(FieldHansenThirdBodyLinear), module, "FieldHansenThirdBodyLinear", 0);
              }

              void t_FieldHansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "class_", make_descriptor(FieldHansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "wrapfn_", make_descriptor(t_FieldHansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenThirdBodyLinear::wrap_Object(FieldHansenThirdBodyLinear(((t_FieldHansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenThirdBodyLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpMath.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpMath::class$ = NULL;
      jmethodID *DfpMath::mids$ = NULL;
      bool DfpMath::live$ = false;

      jclass DfpMath::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpMath");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acos_a714269abf022321] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_a714269abf022321] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_a714269abf022321] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_a714269abf022321] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_exp_a714269abf022321] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_a714269abf022321] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_cd2054800f3587f2] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_f5f69678420ef5b5] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_a714269abf022321] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_a714269abf022321] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitMult_d6cb3d8676900d2f] = env->getStaticMethodID(cls, "splitMult", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitDiv_d6cb3d8676900d2f] = env->getStaticMethodID(cls, "splitDiv", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitPow_3adf1f0fbfb2d82f] = env->getStaticMethodID(cls, "splitPow", "([Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expInternal_a714269abf022321] = env->getStaticMethodID(cls, "expInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_logInternal_02f2d3350465c820] = env->getStaticMethodID(cls, "logInternal", "([Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinInternal_a3796c0d40b4278b] = env->getStaticMethodID(cls, "sinInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosInternal_a3796c0d40b4278b] = env->getStaticMethodID(cls, "cosInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanInternal_a714269abf022321] = env->getStaticMethodID(cls, "atanInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_67530136c686dd00] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/DfpField;Ljava/lang/String;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_432445984aae9fc7] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::dfp::Dfp DfpMath::acos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_acos_a714269abf022321], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::asin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_asin_a714269abf022321], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::atan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_atan_a714269abf022321], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::cos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_cos_a714269abf022321], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::exp(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_exp_a714269abf022321], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::log(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_log_a714269abf022321], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_cd2054800f3587f2], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_f5f69678420ef5b5], a0.this$, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::sin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_sin_a714269abf022321], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::tan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_tan_a714269abf022321], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DfpMath__methods_[] = {
        DECLARE_METHOD(t_DfpMath, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, acos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, asin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, atan, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, cos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, exp, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, log, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, sin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, tan, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpMath)[] = {
        { Py_tp_methods, t_DfpMath__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpMath)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpMath, t_DfpMath, DfpMath);

      void t_DfpMath::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpMath), &PY_TYPE_DEF(DfpMath), module, "DfpMath", 0);
      }

      void t_DfpMath::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "class_", make_descriptor(DfpMath::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "wrapfn_", make_descriptor(t_DfpMath::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpMath::initializeClass, 1)))
          return NULL;
        return t_DfpMath::wrap_Object(DfpMath(((t_DfpMath *) arg)->object.this$));
      }
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpMath::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::acos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "acos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::asin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "asin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::atan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "atan", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::cos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::exp(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "exp", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::log(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "log", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::sin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::tan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "tan", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients.h"
#include "java/util/SortedMap.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *LnsCoefficients::class$ = NULL;
            jmethodID *LnsCoefficients::mids$ = NULL;
            bool LnsCoefficients::live$ = false;

            jclass LnsCoefficients::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_91749d1b642bb169] = env->getMethodID(cls, "<init>", "(II[[DLjava/util/SortedMap;D)V");
                mids$[mid_getLns_cad98089d00f8a5b] = env->getMethodID(cls, "getLns", "(II)D");
                mids$[mid_getdLnsdGamma_cad98089d00f8a5b] = env->getMethodID(cls, "getdLnsdGamma", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LnsCoefficients::LnsCoefficients(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, const ::java::util::SortedMap & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91749d1b642bb169, a0, a1, a2.this$, a3.this$, a4)) {}

            jdouble LnsCoefficients::getLns(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLns_cad98089d00f8a5b], a0, a1);
            }

            jdouble LnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdLnsdGamma_cad98089d00f8a5b], a0, a1);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args);
            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args);

            static PyMethodDef t_LnsCoefficients__methods_[] = {
              DECLARE_METHOD(t_LnsCoefficients, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, getLns, METH_VARARGS),
              DECLARE_METHOD(t_LnsCoefficients, getdLnsdGamma, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LnsCoefficients)[] = {
              { Py_tp_methods, t_LnsCoefficients__methods_ },
              { Py_tp_init, (void *) t_LnsCoefficients_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LnsCoefficients)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LnsCoefficients, t_LnsCoefficients, LnsCoefficients);

            void t_LnsCoefficients::install(PyObject *module)
            {
              installType(&PY_TYPE(LnsCoefficients), &PY_TYPE_DEF(LnsCoefficients), module, "LnsCoefficients", 0);
            }

            void t_LnsCoefficients::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "class_", make_descriptor(LnsCoefficients::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "wrapfn_", make_descriptor(t_LnsCoefficients::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LnsCoefficients::initializeClass, 1)))
                return NULL;
              return t_LnsCoefficients::wrap_Object(LnsCoefficients(((t_LnsCoefficients *) arg)->object.this$));
            }
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LnsCoefficients::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::java::util::SortedMap a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              LnsCoefficients object((jobject) NULL);

              if (!parseArgs(args, "II[[DKD", ::java::util::SortedMap::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_SortedMap::parameters_, &a4))
              {
                INT_CALL(object = LnsCoefficients(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLns(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getLns", args);
              return NULL;
            }

            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdLnsdGamma(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdLnsdGamma", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/DTM2000.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *DTM2000::class$ = NULL;
          jmethodID *DTM2000::mids$ = NULL;
          bool DTM2000::live$ = false;

          jclass DTM2000::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0277fbe740513eaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_6b6da4d38e584ce8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_58866e32a1c9318b] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_e9a4fc2340b58984] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_3139140ba57a492c] = env->getMethodID(cls, "getDensity", "(IDDDDDDDD)D");
              mids$[mid_getDensity_c5a77526dea4a95d] = env->getMethodID(cls, "getDensity", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0277fbe740513eaf, a0.this$, a1.this$, a2.this$)) {}

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6b6da4d38e584ce8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          jdouble DTM2000::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_58866e32a1c9318b], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e9a4fc2340b58984], a0.this$, a1.this$, a2.this$));
          }

          jdouble DTM2000::getDensity(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_3139140ba57a492c], a0, a1, a2, a3, a4, a5, a6, a7, a8);
          }

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_c5a77526dea4a95d], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8));
          }

          ::org::orekit::frames::Frame DTM2000::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args);
          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self);
          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data);
          static PyGetSetDef t_DTM2000__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000__methods_[] = {
            DECLARE_METHOD(t_DTM2000, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_DTM2000, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000)[] = {
            { Py_tp_methods, t_DTM2000__methods_ },
            { Py_tp_init, (void *) t_DTM2000_init_ },
            { Py_tp_getset, t_DTM2000__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DTM2000, t_DTM2000, DTM2000);

          void t_DTM2000::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000), &PY_TYPE_DEF(DTM2000), module, "DTM2000", 0);
          }

          void t_DTM2000::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "class_", make_descriptor(DTM2000::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "wrapfn_", make_descriptor(t_DTM2000::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000::initializeClass, 1)))
              return NULL;
            return t_DTM2000::wrap_Object(DTM2000(((t_DTM2000 *) arg)->object.this$));
          }
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 9:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble result;

                if (!parseArgs(args, "IDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IKKKKDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeTroposphericDelayModifier::live$ = false;

          jclass BaseRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeErrorTroposphericModel_b8971448fff75978] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeErrorTroposphericModel_9a2cbda6eb51ddd8] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_3c029eb579d11318] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          jdouble BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeErrorTroposphericModel_b8971448fff75978], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeErrorTroposphericModel_9a2cbda6eb51ddd8], a0.this$, a1.this$, a2.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, rangeErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeTroposphericDelayModifier, t_BaseRangeTroposphericDelayModifier, BaseRangeTroposphericDelayModifier);

          void t_BaseRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeTroposphericDelayModifier), module, "BaseRangeTroposphericDelayModifier", 0);
          }

          void t_BaseRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "class_", make_descriptor(BaseRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeTroposphericDelayModifier::wrap_Object(BaseRangeTroposphericDelayModifier(((t_BaseRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmMetadata::class$ = NULL;
              jmethodID *AcmMetadata::mids$ = NULL;
              bool AcmMetadata::live$ = false;

              jclass AcmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_fe20320dccf187ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAcmDataElements_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_c325492395d89b24] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_c325492395d89b24] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_b74f83833fdad017] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getObjectDesignator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getOdmMessageLink_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorAddress_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getStartTime_c325492395d89b24] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_c325492395d89b24] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_b74f83833fdad017] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_setAcmDataElements_0e7c3032c7c93ed3] = env->getMethodID(cls, "setAcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_734b91ac30d5f9b4] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_02135a6ef25adb4b] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_734b91ac30d5f9b4] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_8ba9fe7a847cecad] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setObjectDesignator_734b91ac30d5f9b4] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setOdmMessageLink_734b91ac30d5f9b4] = env->getMethodID(cls, "setOdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorAddress_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setStartTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_8ba9fe7a847cecad] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmMetadata::AcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_fe20320dccf187ae, a0.this$)) {}

              ::java::util::List AcmMetadata::getAcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAcmDataElements_e62d3bb06d56d7e3]));
              }

              ::java::lang::String AcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_c325492395d89b24]));
              }

              ::java::lang::String AcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_c325492395d89b24]));
              }

              jdouble AcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_b74f83833fdad017]);
              }

              ::java::lang::String AcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AcmMetadata::getOdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMessageLink_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_c325492395d89b24]));
              }

              jdouble AcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_b74f83833fdad017]);
              }

              void AcmMetadata::setAcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcmDataElements_0e7c3032c7c93ed3], a0.this$);
              }

              void AcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_734b91ac30d5f9b4], a0.this$);
              }

              void AcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_02135a6ef25adb4b], a0.this$);
              }

              void AcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_734b91ac30d5f9b4], a0.this$);
              }

              void AcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_02135a6ef25adb4b], a0.this$);
              }

              void AcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_8ba9fe7a847cecad], a0);
              }

              void AcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_734b91ac30d5f9b4], a0.this$);
              }

              void AcmMetadata::setOdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOdmMessageLink_734b91ac30d5f9b4], a0.this$);
              }

              void AcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_734b91ac30d5f9b4], a0.this$);
              }

              void AcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_734b91ac30d5f9b4], a0.this$);
              }

              void AcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_734b91ac30d5f9b4], a0.this$);
              }

              void AcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_734b91ac30d5f9b4], a0.this$);
              }

              void AcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_734b91ac30d5f9b4], a0.this$);
              }

              void AcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_02135a6ef25adb4b], a0.this$);
              }

              void AcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_02135a6ef25adb4b], a0.this$);
              }

              void AcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_8ba9fe7a847cecad], a0);
              }

              void AcmMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AcmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmMetadata_init_(t_AcmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmMetadata_getAcmDataElements(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getCatalogName(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getEpochT0(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getInternationalDesignator(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getNextLeapEpoch(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getNextLeapTaimutc(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getObjectDesignator(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOdmMessageLink(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorAddress(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorEmail(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPOC(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPhone(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPosition(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getStartTime(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getStopTime(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getTaimutcT0(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_setAcmDataElements(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setCatalogName(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setEpochT0(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setInternationalDesignator(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setNextLeapEpoch(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setNextLeapTaimutc(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setObjectDesignator(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOdmMessageLink(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorAddress(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorEmail(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPOC(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPhone(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPosition(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setStartTime(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setStopTime(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setTaimutcT0(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_validate(t_AcmMetadata *self, PyObject *args);
              static PyObject *t_AcmMetadata_get__acmDataElements(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__acmDataElements(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__catalogName(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__catalogName(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__epochT0(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__epochT0(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__internationalDesignator(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__internationalDesignator(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__nextLeapEpoch(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__nextLeapEpoch(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__nextLeapTaimutc(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__nextLeapTaimutc(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__objectDesignator(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__objectDesignator(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__odmMessageLink(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__odmMessageLink(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorAddress(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorAddress(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorEmail(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorEmail(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPOC(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPOC(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPhone(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPhone(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPosition(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPosition(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__startTime(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__startTime(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__stopTime(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__stopTime(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__taimutcT0(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__taimutcT0(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AcmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AcmMetadata, acmDataElements),
                DECLARE_GETSET_FIELD(t_AcmMetadata, catalogName),
                DECLARE_GETSET_FIELD(t_AcmMetadata, epochT0),
                DECLARE_GETSET_FIELD(t_AcmMetadata, internationalDesignator),
                DECLARE_GETSET_FIELD(t_AcmMetadata, nextLeapEpoch),
                DECLARE_GETSET_FIELD(t_AcmMetadata, nextLeapTaimutc),
                DECLARE_GETSET_FIELD(t_AcmMetadata, objectDesignator),
                DECLARE_GETSET_FIELD(t_AcmMetadata, odmMessageLink),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorAddress),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorEmail),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPOC),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPhone),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPosition),
                DECLARE_GETSET_FIELD(t_AcmMetadata, startTime),
                DECLARE_GETSET_FIELD(t_AcmMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_AcmMetadata, taimutcT0),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmMetadata__methods_[] = {
                DECLARE_METHOD(t_AcmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadata, getAcmDataElements, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getCatalogName, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getEpochT0, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getInternationalDesignator, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getNextLeapEpoch, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getNextLeapTaimutc, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getObjectDesignator, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorAddress, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorEmail, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPOC, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPhone, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPosition, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getTaimutcT0, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, setAcmDataElements, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setCatalogName, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setEpochT0, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setInternationalDesignator, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setNextLeapEpoch, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setNextLeapTaimutc, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setObjectDesignator, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOdmMessageLink, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorAddress, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorEmail, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPOC, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPhone, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPosition, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setTaimutcT0, METH_O),
                DECLARE_METHOD(t_AcmMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmMetadata)[] = {
                { Py_tp_methods, t_AcmMetadata__methods_ },
                { Py_tp_init, (void *) t_AcmMetadata_init_ },
                { Py_tp_getset, t_AcmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmMetadata),
                NULL
              };

              DEFINE_TYPE(AcmMetadata, t_AcmMetadata, AcmMetadata);

              void t_AcmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmMetadata), &PY_TYPE_DEF(AcmMetadata), module, "AcmMetadata", 0);
              }

              void t_AcmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "class_", make_descriptor(AcmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "wrapfn_", make_descriptor(t_AcmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmMetadata::initializeClass, 1)))
                  return NULL;
                return t_AcmMetadata::wrap_Object(AcmMetadata(((t_AcmMetadata *) arg)->object.this$));
              }
              static PyObject *t_AcmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmMetadata_init_(t_AcmMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                AcmMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = AcmMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmMetadata_getAcmDataElements(t_AcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAcmDataElements());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AcmElements));
              }

              static PyObject *t_AcmMetadata_getCatalogName(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCatalogName());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getEpochT0(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getInternationalDesignator(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInternationalDesignator());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getNextLeapEpoch(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getNextLeapTaimutc(t_AcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AcmMetadata_getObjectDesignator(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectDesignator());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOdmMessageLink(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorAddress(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorAddress());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorEmail(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorEmail());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPOC(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPOC());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPhone(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPhone());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPosition(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPosition());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getStartTime(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getStopTime(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getTaimutcT0(t_AcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AcmMetadata_setAcmDataElements(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setAcmDataElements(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAcmDataElements", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setCatalogName(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCatalogName(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCatalogName", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setEpochT0(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochT0", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setInternationalDesignator(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInternationalDesignator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInternationalDesignator", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setNextLeapEpoch(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setNextLeapEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapEpoch", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setNextLeapTaimutc(t_AcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNextLeapTaimutc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapTaimutc", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setObjectDesignator(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setObjectDesignator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObjectDesignator", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOdmMessageLink(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorAddress(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorAddress(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorAddress", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorEmail(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorEmail(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorEmail", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorPOC(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPOC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPOC", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorPhone(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPhone(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPhone", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorPosition(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPosition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPosition", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setStartTime(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setStopTime(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setTaimutcT0(t_AcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTaimutcT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTaimutcT0", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_validate(t_AcmMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AcmMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AcmMetadata_get__acmDataElements(t_AcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAcmDataElements());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_AcmMetadata_set__acmDataElements(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAcmDataElements(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "acmDataElements", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__catalogName(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCatalogName());
                return j2p(value);
              }
              static int t_AcmMetadata_set__catalogName(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCatalogName(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "catalogName", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__epochT0(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__epochT0(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochT0", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__internationalDesignator(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInternationalDesignator());
                return j2p(value);
              }
              static int t_AcmMetadata_set__internationalDesignator(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInternationalDesignator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "internationalDesignator", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__nextLeapEpoch(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__nextLeapEpoch(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNextLeapEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapEpoch", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__nextLeapTaimutc(t_AcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AcmMetadata_set__nextLeapTaimutc(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNextLeapTaimutc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapTaimutc", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__objectDesignator(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectDesignator());
                return j2p(value);
              }
              static int t_AcmMetadata_set__objectDesignator(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setObjectDesignator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "objectDesignator", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__odmMessageLink(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOdmMessageLink());
                return j2p(value);
              }
              static int t_AcmMetadata_set__odmMessageLink(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "odmMessageLink", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorAddress(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorAddress());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorAddress(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorAddress(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorAddress", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorEmail(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorEmail());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorEmail(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorEmail(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorEmail", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorPOC(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPOC());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPOC(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPOC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPOC", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorPhone(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPhone());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPhone(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPhone(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPhone", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorPosition(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPosition());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPosition(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPosition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPosition", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__startTime(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__startTime(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__stopTime(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__stopTime(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__taimutcT0(t_AcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AcmMetadata_set__taimutcT0(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTaimutcT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "taimutcT0", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008InputParameters::class$ = NULL;
          jmethodID *JB2008InputParameters::mids$ = NULL;
          bool JB2008InputParameters::live$ = false;

          jclass JB2008InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDSTDTC_fd347811007a6ba3] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_fd347811007a6ba3] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_fd347811007a6ba3] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_fd347811007a6ba3] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_fd347811007a6ba3] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_fd347811007a6ba3] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_fd347811007a6ba3] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_fd347811007a6ba3] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_fd347811007a6ba3] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JB2008InputParameters::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_fd347811007a6ba3], a0.this$);
          }

          jdouble JB2008InputParameters::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10_fd347811007a6ba3], a0.this$);
          }

          jdouble JB2008InputParameters::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10B_fd347811007a6ba3], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
          }

          jdouble JB2008InputParameters::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10_fd347811007a6ba3], a0.this$);
          }

          jdouble JB2008InputParameters::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10B_fd347811007a6ba3], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10_fd347811007a6ba3], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10B_fd347811007a6ba3], a0.this$);
          }

          jdouble JB2008InputParameters::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10_fd347811007a6ba3], a0.this$);
          }

          jdouble JB2008InputParameters::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10B_fd347811007a6ba3], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data);
          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data);
          static PyGetSetDef t_JB2008InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008InputParameters, maxDate),
            DECLARE_GET_FIELD(t_JB2008InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008InputParameters__methods_[] = {
            DECLARE_METHOD(t_JB2008InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, getDSTDTC, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getS10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getS10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10B, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008InputParameters)[] = {
            { Py_tp_methods, t_JB2008InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_JB2008InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(JB2008InputParameters, t_JB2008InputParameters, JB2008InputParameters);

          void t_JB2008InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008InputParameters), &PY_TYPE_DEF(JB2008InputParameters), module, "JB2008InputParameters", 0);
          }

          void t_JB2008InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "class_", make_descriptor(JB2008InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "wrapfn_", make_descriptor(t_JB2008InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008InputParameters::initializeClass, 1)))
              return NULL;
            return t_JB2008InputParameters::wrap_Object(JB2008InputParameters(((t_JB2008InputParameters *) arg)->object.this$));
          }
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDSTDTC(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDSTDTC", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersPhaseModifier::class$ = NULL;
          jmethodID *PhaseCentersPhaseModifier::mids$ = NULL;
          bool PhaseCentersPhaseModifier::live$ = false;

          jclass PhaseCentersPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c749d199d359fa63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersPhaseModifier::PhaseCentersPhaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c749d199d359fa63, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void PhaseCentersPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_PhaseCentersPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersPhaseModifier_init_(t_PhaseCentersPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersPhaseModifier_getParametersDrivers(t_PhaseCentersPhaseModifier *self);
          static PyObject *t_PhaseCentersPhaseModifier_modifyWithoutDerivatives(t_PhaseCentersPhaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersPhaseModifier_get__parametersDrivers(t_PhaseCentersPhaseModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersPhaseModifier)[] = {
            { Py_tp_methods, t_PhaseCentersPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersPhaseModifier_init_ },
            { Py_tp_getset, t_PhaseCentersPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersPhaseModifier, t_PhaseCentersPhaseModifier, PhaseCentersPhaseModifier);

          void t_PhaseCentersPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersPhaseModifier), &PY_TYPE_DEF(PhaseCentersPhaseModifier), module, "PhaseCentersPhaseModifier", 0);
          }

          void t_PhaseCentersPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "class_", make_descriptor(PhaseCentersPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "wrapfn_", make_descriptor(t_PhaseCentersPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersPhaseModifier::wrap_Object(PhaseCentersPhaseModifier(((t_PhaseCentersPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersPhaseModifier_init_(t_PhaseCentersPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersPhaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersPhaseModifier_getParametersDrivers(t_PhaseCentersPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseCentersPhaseModifier_modifyWithoutDerivatives(t_PhaseCentersPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_PhaseCentersPhaseModifier_get__parametersDrivers(t_PhaseCentersPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *FieldMatrixChangingVisitor::mids$ = NULL;
      bool FieldMatrixChangingVisitor::live$ = false;

      jclass FieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_2ff8de927fda4153] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_ea412797eafea800] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_52bb8aebd493cd71] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_2ff8de927fda4153]));
      }

      void FieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ea412797eafea800], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_52bb8aebd493cd71], a0, a1, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self);
      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixChangingVisitor, t_FieldMatrixChangingVisitor, FieldMatrixChangingVisitor);
      PyObject *t_FieldMatrixChangingVisitor::wrap_Object(const FieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixChangingVisitor), &PY_TYPE_DEF(FieldMatrixChangingVisitor), module, "FieldMatrixChangingVisitor", 0);
      }

      void t_FieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "class_", make_descriptor(FieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixChangingVisitor::wrap_Object(FieldMatrixChangingVisitor(((t_FieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonMeasurementBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonMeasurementBuilder::class$ = NULL;
          jmethodID *PythonMeasurementBuilder::mids$ = NULL;
          bool PythonMeasurementBuilder::live$ = false;

          jclass PythonMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addModifier_cb38ed914ba48f20] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_121e4e49170b7802] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getModifiers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_eb47c48e4fca882c] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementBuilder::PythonMeasurementBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonMeasurementBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args);
          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self);
          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args);
          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data);
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementBuilder, t_PythonMeasurementBuilder, PythonMeasurementBuilder);
          PyObject *t_PythonMeasurementBuilder::wrap_Object(const PythonMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementBuilder), &PY_TYPE_DEF(PythonMeasurementBuilder), module, "PythonMeasurementBuilder", 1);
          }

          void t_PythonMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "class_", make_descriptor(PythonMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonMeasurementBuilder_addModifier0 },
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonMeasurementBuilder_build1 },
              { "getModifiers", "()Ljava/util/List;", (void *) t_PythonMeasurementBuilder_getModifiers2 },
              { "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;", (void *) t_PythonMeasurementBuilder_getSatellites3 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonMeasurementBuilder_init4 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementBuilder_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementBuilder::wrap_Object(PythonMeasurementBuilder(((t_PythonMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementBuilder object((jobject) NULL);

            INT_CALL(object = PythonMeasurementBuilder());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimationModifier::wrap_Object(::org::orekit::estimation::measurements::EstimationModifier(a0));
            PyObject *result = PyObject_CallMethod(obj, "addModifier", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
            PyObject *result = PyObject_CallMethod(obj, "build", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &value))
            {
              throwTypeError("build", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getModifiers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getModifiers", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &value))
            {
              throwTypeError("getSatellites", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Throwable.h"
#include "java/lang/Throwable.h"
#include "java/io/Serializable.h"
#include "java/lang/StackTraceElement.h"
#include "java/io/PrintWriter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Throwable::class$ = NULL;
    jmethodID *Throwable::mids$ = NULL;
    bool Throwable::live$ = false;

    jclass Throwable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Throwable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_addSuppressed_c5d3549d4f245728] = env->getMethodID(cls, "addSuppressed", "(Ljava/lang/Throwable;)V");
        mids$[mid_fillInStackTrace_8ccc799e0abbc77e] = env->getMethodID(cls, "fillInStackTrace", "()Ljava/lang/Throwable;");
        mids$[mid_getCause_8ccc799e0abbc77e] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
        mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
        mids$[mid_getStackTrace_17c6439d4c7f5646] = env->getMethodID(cls, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
        mids$[mid_getSuppressed_3b8bdf81e815c0a6] = env->getMethodID(cls, "getSuppressed", "()[Ljava/lang/Throwable;");
        mids$[mid_initCause_ec584df1afedc80c] = env->getMethodID(cls, "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;");
        mids$[mid_printStackTrace_a1fa5dae97ea5ed2] = env->getMethodID(cls, "printStackTrace", "()V");
        mids$[mid_printStackTrace_5820b90479773400] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintStream;)V");
        mids$[mid_printStackTrace_9ccc55eb3506a3d6] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintWriter;)V");
        mids$[mid_setStackTrace_392578951a1ba08c] = env->getMethodID(cls, "setStackTrace", "([Ljava/lang/StackTraceElement;)V");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Throwable::Throwable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    Throwable::Throwable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Throwable::Throwable(const ::java::lang::String & a0, const Throwable & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}

    void Throwable::addSuppressed(const Throwable & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addSuppressed_c5d3549d4f245728], a0.this$);
    }

    Throwable Throwable::fillInStackTrace() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_fillInStackTrace_8ccc799e0abbc77e]));
    }

    Throwable Throwable::getCause() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_getCause_8ccc799e0abbc77e]));
    }

    ::java::lang::String Throwable::getLocalizedMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Throwable::getMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
    }

    JArray< ::java::lang::StackTraceElement > Throwable::getStackTrace() const
    {
      return JArray< ::java::lang::StackTraceElement >(env->callObjectMethod(this$, mids$[mid_getStackTrace_17c6439d4c7f5646]));
    }

    JArray< Throwable > Throwable::getSuppressed() const
    {
      return JArray< Throwable >(env->callObjectMethod(this$, mids$[mid_getSuppressed_3b8bdf81e815c0a6]));
    }

    Throwable Throwable::initCause(const Throwable & a0) const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_initCause_ec584df1afedc80c], a0.this$));
    }

    void Throwable::printStackTrace() const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_a1fa5dae97ea5ed2]);
    }

    void Throwable::printStackTrace(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_5820b90479773400], a0.this$);
    }

    void Throwable::printStackTrace(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_9ccc55eb3506a3d6], a0.this$);
    }

    void Throwable::setStackTrace(const JArray< ::java::lang::StackTraceElement > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setStackTrace_392578951a1ba08c], a0.this$);
    }

    ::java::lang::String Throwable::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getCause(t_Throwable *self);
    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self);
    static PyObject *t_Throwable_getMessage(t_Throwable *self);
    static PyObject *t_Throwable_getStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getSuppressed(t_Throwable *self);
    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data);
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data);
    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data);
    static PyGetSetDef t_Throwable__fields_[] = {
      DECLARE_GET_FIELD(t_Throwable, cause),
      DECLARE_GET_FIELD(t_Throwable, localizedMessage),
      DECLARE_GET_FIELD(t_Throwable, message),
      DECLARE_GETSET_FIELD(t_Throwable, stackTrace),
      DECLARE_GET_FIELD(t_Throwable, suppressed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Throwable__methods_[] = {
      DECLARE_METHOD(t_Throwable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, addSuppressed, METH_O),
      DECLARE_METHOD(t_Throwable, fillInStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getCause, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getLocalizedMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getSuppressed, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, initCause, METH_O),
      DECLARE_METHOD(t_Throwable, printStackTrace, METH_VARARGS),
      DECLARE_METHOD(t_Throwable, setStackTrace, METH_O),
      DECLARE_METHOD(t_Throwable, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Throwable)[] = {
      { Py_tp_methods, t_Throwable__methods_ },
      { Py_tp_init, (void *) t_Throwable_init_ },
      { Py_tp_getset, t_Throwable__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Throwable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Throwable, t_Throwable, Throwable);

    void t_Throwable::install(PyObject *module)
    {
      installType(&PY_TYPE(Throwable), &PY_TYPE_DEF(Throwable), module, "Throwable", 0);
    }

    void t_Throwable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "class_", make_descriptor(Throwable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "wrapfn_", make_descriptor(t_Throwable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Throwable::initializeClass, 1)))
        return NULL;
      return t_Throwable::wrap_Object(Throwable(((t_Throwable *) arg)->object.this$));
    }
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Throwable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Throwable object((jobject) NULL);

          INT_CALL(object = Throwable());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Throwable(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable a1((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "sk", Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Throwable(a0, a1));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(self->object.addSuppressed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addSuppressed", arg);
      return NULL;
    }

    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.fillInStackTrace());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getCause(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.getCause());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLocalizedMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getStackTrace(t_Throwable *self)
    {
      JArray< ::java::lang::StackTraceElement > result((jobject) NULL);
      OBJ_CALL(result = self->object.getStackTrace());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }

    static PyObject *t_Throwable_getSuppressed(t_Throwable *self)
    {
      JArray< Throwable > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuppressed());
      return JArray<jobject>(result.this$).wrap(t_Throwable::wrap_jobject);
    }

    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);
      Throwable result((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.initCause(a0));
        return t_Throwable::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "initCause", arg);
      return NULL;
    }

    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.printStackTrace());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          ::java::io::PrintStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::PrintWriter a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintWriter::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printStackTrace", args);
      return NULL;
    }

    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg)
    {
      JArray< ::java::lang::StackTraceElement > a0((jobject) NULL);

      if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setStackTrace(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setStackTrace", arg);
      return NULL;
    }

    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Throwable), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data)
    {
      Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getCause());
      return t_Throwable::wrap_Object(value);
    }

    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLocalizedMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data)
    {
      JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
      OBJ_CALL(value = self->object.getStackTrace());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data)
    {
      {
        JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
        if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &value))
        {
          INT_CALL(self->object.setStackTrace(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "stackTrace", arg);
      return -1;
    }

    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data)
    {
      JArray< Throwable > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuppressed());
      return JArray<jobject>(value.this$).wrap(t_Throwable::wrap_jobject);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmSegment::class$ = NULL;
            jmethodID *CdmSegment::mids$ = NULL;
            bool CdmSegment::live$ = false;

            jclass CdmSegment::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmSegment");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5697c2b09dee8814] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmSegment::CdmSegment(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_5697c2b09dee8814, a0.this$, a1.this$)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args);
            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data);
            static PyGetSetDef t_CdmSegment__fields_[] = {
              DECLARE_GET_FIELD(t_CdmSegment, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmSegment__methods_[] = {
              DECLARE_METHOD(t_CdmSegment, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmSegment)[] = {
              { Py_tp_methods, t_CdmSegment__methods_ },
              { Py_tp_init, (void *) t_CdmSegment_init_ },
              { Py_tp_getset, t_CdmSegment__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmSegment)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
              NULL
            };

            DEFINE_TYPE(CdmSegment, t_CdmSegment, CdmSegment);
            PyObject *t_CdmSegment::wrap_Object(const CdmSegment& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CdmSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CdmSegment::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmSegment), &PY_TYPE_DEF(CdmSegment), module, "CdmSegment", 0);
            }

            void t_CdmSegment::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "class_", make_descriptor(CdmSegment::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "wrapfn_", make_descriptor(t_CdmSegment::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmSegment::initializeClass, 1)))
                return NULL;
              return t_CdmSegment::wrap_Object(CdmSegment(((t_CdmSegment *) arg)->object.this$));
            }
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmSegment::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmData a1((jobject) NULL);
              CdmSegment object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmData::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CdmSegment(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmMetadata);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmData);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSRangeModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSRangeModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a3f6e98498ad57a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSRangeModifier::OnBoardAntennaOneWayGNSSRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3f6e98498ad57a5, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void OnBoardAntennaOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSRangeModifier, t_OnBoardAntennaOneWayGNSSRangeModifier, OnBoardAntennaOneWayGNSSRangeModifier);

          void t_OnBoardAntennaOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSRangeModifier), module, "OnBoardAntennaOneWayGNSSRangeModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_Object(OnBoardAntennaOneWayGNSSRangeModifier(((t_OnBoardAntennaOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleVectorValueChecker.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleVectorValueChecker::class$ = NULL;
      jmethodID *SimpleVectorValueChecker::mids$ = NULL;
      bool SimpleVectorValueChecker::live$ = false;

      jclass SimpleVectorValueChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleVectorValueChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_0a97d77099b42332] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointVectorValuePair;Lorg/hipparchus/optim/PointVectorValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

      jboolean SimpleVectorValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointVectorValuePair & a1, const ::org::hipparchus::optim::PointVectorValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_0a97d77099b42332], a0, a1.this$, a2.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_SimpleVectorValueChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleVectorValueChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleVectorValueChecker_of_(t_SimpleVectorValueChecker *self, PyObject *args);
      static int t_SimpleVectorValueChecker_init_(t_SimpleVectorValueChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleVectorValueChecker_converged(t_SimpleVectorValueChecker *self, PyObject *args);
      static PyObject *t_SimpleVectorValueChecker_get__parameters_(t_SimpleVectorValueChecker *self, void *data);
      static PyGetSetDef t_SimpleVectorValueChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleVectorValueChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleVectorValueChecker__methods_[] = {
        DECLARE_METHOD(t_SimpleVectorValueChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleVectorValueChecker)[] = {
        { Py_tp_methods, t_SimpleVectorValueChecker__methods_ },
        { Py_tp_init, (void *) t_SimpleVectorValueChecker_init_ },
        { Py_tp_getset, t_SimpleVectorValueChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleVectorValueChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimpleVectorValueChecker, t_SimpleVectorValueChecker, SimpleVectorValueChecker);
      PyObject *t_SimpleVectorValueChecker::wrap_Object(const SimpleVectorValueChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleVectorValueChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleVectorValueChecker *self = (t_SimpleVectorValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleVectorValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleVectorValueChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleVectorValueChecker *self = (t_SimpleVectorValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleVectorValueChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleVectorValueChecker), &PY_TYPE_DEF(SimpleVectorValueChecker), module, "SimpleVectorValueChecker", 0);
      }

      void t_SimpleVectorValueChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "class_", make_descriptor(SimpleVectorValueChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "wrapfn_", make_descriptor(t_SimpleVectorValueChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleVectorValueChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleVectorValueChecker::initializeClass, 1)))
          return NULL;
        return t_SimpleVectorValueChecker::wrap_Object(SimpleVectorValueChecker(((t_SimpleVectorValueChecker *) arg)->object.this$));
      }
      static PyObject *t_SimpleVectorValueChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleVectorValueChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleVectorValueChecker_of_(t_SimpleVectorValueChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleVectorValueChecker_init_(t_SimpleVectorValueChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimpleVectorValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimpleVectorValueChecker(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointVectorValuePair);
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimpleVectorValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimpleVectorValueChecker(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointVectorValuePair);
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleVectorValueChecker_converged(t_SimpleVectorValueChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::optim::PointVectorValuePair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::optim::PointVectorValuePair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::optim::PointVectorValuePair::initializeClass, ::org::hipparchus::optim::PointVectorValuePair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::t_PointVectorValuePair::parameters_, &a2, &p2, ::org::hipparchus::optim::t_PointVectorValuePair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimpleVectorValueChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimpleVectorValueChecker_get__parameters_(t_SimpleVectorValueChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2::mids$ = NULL;
        bool FieldUnivariateDerivative2::live$ = false;

        jclass FieldUnivariateDerivative2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bf4cfa4b031fbab0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_baa1ed35ace5d036] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_43add0d5ea3aedb5] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acos_43add0d5ea3aedb5] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acosh_43add0d5ea3aedb5] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_e751beabde48d861] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_621efc2b386a9f74] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_ac03c11b8be0c792] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asin_43add0d5ea3aedb5] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asinh_43add0d5ea3aedb5] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan_43add0d5ea3aedb5] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan2_e751beabde48d861] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atanh_43add0d5ea3aedb5] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cbrt_43add0d5ea3aedb5] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ceil_43add0d5ea3aedb5] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_compose_594d9a344850c9c6] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_e751beabde48d861] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_621efc2b386a9f74] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_ac03c11b8be0c792] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cos_43add0d5ea3aedb5] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cosh_43add0d5ea3aedb5] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_e751beabde48d861] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_621efc2b386a9f74] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_ac03c11b8be0c792] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_43add0d5ea3aedb5] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_expm1_43add0d5ea3aedb5] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_floor_43add0d5ea3aedb5] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getDerivative_21e6b3c521b9c768] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_28a448aa48347f1f] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_81520b552cb3fa26] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_43add0d5ea3aedb5] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_81520b552cb3fa26] = env->getMethodID(cls, "getSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_81520b552cb3fa26] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_e751beabde48d861] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_922fff7e88c36d26] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_68f5d9e7f64378af] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_eb02f2291f0788e2] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_cbd773344b79c07c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_e3603a23b6cec7ce] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_cd8c65ffd8674953] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_a3d2f5b2745ebcba] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_5d4ffd75d0dc5801] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_628d8a82f0067f6d] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_75719b8cf6521b59] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log_43add0d5ea3aedb5] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log10_43add0d5ea3aedb5] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log1p_43add0d5ea3aedb5] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_e751beabde48d861] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_621efc2b386a9f74] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_4d1030bf85edc6e6] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_ac03c11b8be0c792] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_negate_43add0d5ea3aedb5] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_newInstance_621efc2b386a9f74] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_e751beabde48d861] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_621efc2b386a9f74] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_4d1030bf85edc6e6] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_201fddddce48a7e5] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_reciprocal_43add0d5ea3aedb5] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_e751beabde48d861] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_621efc2b386a9f74] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_ac03c11b8be0c792] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rint_43add0d5ea3aedb5] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rootN_4d1030bf85edc6e6] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_scalb_4d1030bf85edc6e6] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sign_43add0d5ea3aedb5] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sin_43add0d5ea3aedb5] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_43add0d5ea3aedb5] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_43add0d5ea3aedb5] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_e751beabde48d861] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_621efc2b386a9f74] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_ac03c11b8be0c792] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tan_43add0d5ea3aedb5] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tanh_43add0d5ea3aedb5] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_taylor_1d3e368d09a6f8a6] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_6e00dc5eb352fe51] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_43add0d5ea3aedb5] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_4b6e77c66fd622c3] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_43add0d5ea3aedb5] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ulp_43add0d5ea3aedb5] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_bf4cfa4b031fbab0, a0.this$)) {}

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_baa1ed35ace5d036, a0.this$, a1.this$, a2.this$)) {}

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::abs() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_e751beabde48d861], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_621efc2b386a9f74], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_ac03c11b8be0c792], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan2(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_e751beabde48d861], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cbrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ceil() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_594d9a344850c9c6], a0.this$, a1.this$, a2.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_e751beabde48d861], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_621efc2b386a9f74], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_ac03c11b8be0c792], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_e751beabde48d861], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_621efc2b386a9f74], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_ac03c11b8be0c792], a0.this$));
        }

        jboolean FieldUnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::exp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::expm1() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::floor() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_43add0d5ea3aedb5]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_21e6b3c521b9c768], a0));
        }

        jint FieldUnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field FieldUnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_28a448aa48347f1f]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_81520b552cb3fa26]));
        }

        jint FieldUnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::getPi() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_43add0d5ea3aedb5]));
        }

        jdouble FieldUnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getSecondDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSecondDerivative_81520b552cb3fa26]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_81520b552cb3fa26]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative2::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_04d1f63e17d5c5d4]));
        }

        jint FieldUnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::hypot(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_e751beabde48d861], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_922fff7e88c36d26], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_68f5d9e7f64378af], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< FieldUnivariateDerivative2 > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_eb02f2291f0788e2], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_cbd773344b79c07c], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_e3603a23b6cec7ce], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_cd8c65ffd8674953], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_a3d2f5b2745ebcba], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative2 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative2 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_5d4ffd75d0dc5801], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5, const FieldUnivariateDerivative2 & a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_628d8a82f0067f6d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5, jdouble a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_75719b8cf6521b59], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log10() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log1p() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_e751beabde48d861], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_621efc2b386a9f74], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_4d1030bf85edc6e6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_ac03c11b8be0c792], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::negate() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_621efc2b386a9f74], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_e751beabde48d861], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_621efc2b386a9f74], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_4d1030bf85edc6e6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0, const FieldUnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_201fddddce48a7e5], a0, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::reciprocal() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_e751beabde48d861], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_621efc2b386a9f74], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_ac03c11b8be0c792], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rint() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rootN(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_4d1030bf85edc6e6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::scalb(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_4d1030bf85edc6e6], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sign() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_43add0d5ea3aedb5]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_43add0d5ea3aedb5]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sqrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_e751beabde48d861], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_621efc2b386a9f74], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_ac03c11b8be0c792], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_43add0d5ea3aedb5]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_1d3e368d09a6f8a6], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_6e00dc5eb352fe51], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toDegrees() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_43add0d5ea3aedb5]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_4b6e77c66fd622c3]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toRadians() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_43add0d5ea3aedb5]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ulp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_43add0d5ea3aedb5]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, exponent),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, field),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, firstDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, order),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, pi),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, real),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, secondDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, value),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, valueField),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, abs, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan2, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ceil, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, exp, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, expm1, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, floor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getField, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getPi, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getReal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getSecondDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValue, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hypot, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log10, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log1p, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, negate, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rint, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rootN, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, scalb, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative2_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2, t_FieldUnivariateDerivative2, FieldUnivariateDerivative2);
        PyObject *t_FieldUnivariateDerivative2::wrap_Object(const FieldUnivariateDerivative2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2), &PY_TYPE_DEF(FieldUnivariateDerivative2), module, "FieldUnivariateDerivative2", 0);
        }

        void t_FieldUnivariateDerivative2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "class_", make_descriptor(FieldUnivariateDerivative2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2::wrap_Object(FieldUnivariateDerivative2(((t_FieldUnivariateDerivative2 *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1, a2));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldUnivariateDerivative2 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 a6((jobject) NULL);
              PyTypeObject **p6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &p6, t_FieldUnivariateDerivative2::parameters_, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2::pow(a0, a1));
            return t_FieldUnivariateDerivative2::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data)
        {
          FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *AbstractAnalyticalPropagator::mids$ = NULL;
        bool AbstractAnalyticalPropagator::live$ = false;

        jclass AbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_e13564f833403504] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_5df44e253e7e7782] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_8a41319e47f3bd7c] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_propagate_6845ec704c846b03] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_acceptStep_40f13975bd10671f] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_basicPropagate_4f0008999861ca31] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_e13564f833403504], a0.this$);
        }

        void AbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_5df44e253e7e7782]));
        }

        ::java::util::Collection AbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cb666ea1a15f5210]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_8a41319e47f3bd7c]));
        }

        ::org::orekit::propagation::SpacecraftState AbstractAnalyticalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_6845ec704c846b03], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self);
        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, pvProvider),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_AbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalPropagator, t_AbstractAnalyticalPropagator, AbstractAnalyticalPropagator);

        void t_AbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalPropagator), &PY_TYPE_DEF(AbstractAnalyticalPropagator), module, "AbstractAnalyticalPropagator", 0);
        }

        void t_AbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "class_", make_descriptor(AbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_AbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalPropagator::wrap_Object(AbstractAnalyticalPropagator(((t_AbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *CommonPhysicalProperties::class$ = NULL;
          jmethodID *CommonPhysicalProperties::mids$ = NULL;
          bool CommonPhysicalProperties::live$ = false;

          jclass CommonPhysicalProperties::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/CommonPhysicalProperties");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getMaxRcs_b74f83833fdad017] = env->getMethodID(cls, "getMaxRcs", "()D");
              mids$[mid_getMinRcs_b74f83833fdad017] = env->getMethodID(cls, "getMinRcs", "()D");
              mids$[mid_getOebAreaAlongIntermediate_b74f83833fdad017] = env->getMethodID(cls, "getOebAreaAlongIntermediate", "()D");
              mids$[mid_getOebAreaAlongMax_b74f83833fdad017] = env->getMethodID(cls, "getOebAreaAlongMax", "()D");
              mids$[mid_getOebAreaAlongMin_b74f83833fdad017] = env->getMethodID(cls, "getOebAreaAlongMin", "()D");
              mids$[mid_getOebIntermediate_b74f83833fdad017] = env->getMethodID(cls, "getOebIntermediate", "()D");
              mids$[mid_getOebMax_b74f83833fdad017] = env->getMethodID(cls, "getOebMax", "()D");
              mids$[mid_getOebMin_b74f83833fdad017] = env->getMethodID(cls, "getOebMin", "()D");
              mids$[mid_getOebParentFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getOebParentFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_getOebParentFrameEpoch_c325492395d89b24] = env->getMethodID(cls, "getOebParentFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getOebQ_6890e724ec73e493] = env->getMethodID(cls, "getOebQ", "()Lorg/hipparchus/complex/Quaternion;");
              mids$[mid_getRcs_b74f83833fdad017] = env->getMethodID(cls, "getRcs", "()D");
              mids$[mid_getReflectance_b74f83833fdad017] = env->getMethodID(cls, "getReflectance", "()D");
              mids$[mid_getVmAbsolute_b74f83833fdad017] = env->getMethodID(cls, "getVmAbsolute", "()D");
              mids$[mid_getVmApparent_b74f83833fdad017] = env->getMethodID(cls, "getVmApparent", "()D");
              mids$[mid_getVmApparentMax_b74f83833fdad017] = env->getMethodID(cls, "getVmApparentMax", "()D");
              mids$[mid_getVmApparentMin_b74f83833fdad017] = env->getMethodID(cls, "getVmApparentMin", "()D");
              mids$[mid_setMaxRcs_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaxRcs", "(D)V");
              mids$[mid_setMinRcs_8ba9fe7a847cecad] = env->getMethodID(cls, "setMinRcs", "(D)V");
              mids$[mid_setOebAreaAlongIntermediate_8ba9fe7a847cecad] = env->getMethodID(cls, "setOebAreaAlongIntermediate", "(D)V");
              mids$[mid_setOebAreaAlongMax_8ba9fe7a847cecad] = env->getMethodID(cls, "setOebAreaAlongMax", "(D)V");
              mids$[mid_setOebAreaAlongMin_8ba9fe7a847cecad] = env->getMethodID(cls, "setOebAreaAlongMin", "(D)V");
              mids$[mid_setOebIntermediate_8ba9fe7a847cecad] = env->getMethodID(cls, "setOebIntermediate", "(D)V");
              mids$[mid_setOebMax_8ba9fe7a847cecad] = env->getMethodID(cls, "setOebMax", "(D)V");
              mids$[mid_setOebMin_8ba9fe7a847cecad] = env->getMethodID(cls, "setOebMin", "(D)V");
              mids$[mid_setOebParentFrame_4755133c5c4c59be] = env->getMethodID(cls, "setOebParentFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
              mids$[mid_setOebParentFrameEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setOebParentFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setOebQ_d5322b8b512aeb26] = env->getMethodID(cls, "setOebQ", "(ID)V");
              mids$[mid_setRcs_8ba9fe7a847cecad] = env->getMethodID(cls, "setRcs", "(D)V");
              mids$[mid_setReflectance_8ba9fe7a847cecad] = env->getMethodID(cls, "setReflectance", "(D)V");
              mids$[mid_setVmAbsolute_8ba9fe7a847cecad] = env->getMethodID(cls, "setVmAbsolute", "(D)V");
              mids$[mid_setVmApparent_8ba9fe7a847cecad] = env->getMethodID(cls, "setVmApparent", "(D)V");
              mids$[mid_setVmApparentMax_8ba9fe7a847cecad] = env->getMethodID(cls, "setVmApparentMax", "(D)V");
              mids$[mid_setVmApparentMin_8ba9fe7a847cecad] = env->getMethodID(cls, "setVmApparentMin", "(D)V");
              mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommonPhysicalProperties::CommonPhysicalProperties() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          jdouble CommonPhysicalProperties::getMaxRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxRcs_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getMinRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinRcs_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongIntermediate_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMax_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMin_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getOebIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebIntermediate_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getOebMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMax_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getOebMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMin_b74f83833fdad017]);
          }

          ::org::orekit::files::ccsds::definitions::FrameFacade CommonPhysicalProperties::getOebParentFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getOebParentFrame_69d8be1b6b0a1a94]));
          }

          ::org::orekit::time::AbsoluteDate CommonPhysicalProperties::getOebParentFrameEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOebParentFrameEpoch_c325492395d89b24]));
          }

          ::org::hipparchus::complex::Quaternion CommonPhysicalProperties::getOebQ() const
          {
            return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getOebQ_6890e724ec73e493]));
          }

          jdouble CommonPhysicalProperties::getRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcs_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getReflectance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getReflectance_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getVmAbsolute() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmAbsolute_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getVmApparent() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparent_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMax_b74f83833fdad017]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMin_b74f83833fdad017]);
          }

          void CommonPhysicalProperties::setMaxRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxRcs_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setMinRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMinRcs_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongIntermediate_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMax_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMin_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setOebIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebIntermediate_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setOebMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMax_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setOebMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMin_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setOebParentFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrame_4755133c5c4c59be], a0.this$);
          }

          void CommonPhysicalProperties::setOebParentFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrameEpoch_02135a6ef25adb4b], a0.this$);
          }

          void CommonPhysicalProperties::setOebQ(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebQ_d5322b8b512aeb26], a0, a1);
          }

          void CommonPhysicalProperties::setRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRcs_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setReflectance(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReflectance_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setVmAbsolute(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmAbsolute_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setVmApparent(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparent_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setVmApparentMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMax_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::setVmApparentMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMin_8ba9fe7a847cecad], a0);
          }

          void CommonPhysicalProperties::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data);
          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyGetSetDef t_CommonPhysicalProperties__fields_[] = {
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, maxRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, minRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrame),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrameEpoch),
            DECLARE_GET_FIELD(t_CommonPhysicalProperties, oebQ),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, rcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, reflectance),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmAbsolute),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparent),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMin),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CommonPhysicalProperties__methods_[] = {
            DECLARE_METHOD(t_CommonPhysicalProperties, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMaxRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMinRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrame, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrameEpoch, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebQ, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getReflectance, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmAbsolute, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparent, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMaxRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMinRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrame, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrameEpoch, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebQ, METH_VARARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setReflectance, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmAbsolute, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparent, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CommonPhysicalProperties)[] = {
            { Py_tp_methods, t_CommonPhysicalProperties__methods_ },
            { Py_tp_init, (void *) t_CommonPhysicalProperties_init_ },
            { Py_tp_getset, t_CommonPhysicalProperties__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CommonPhysicalProperties)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(CommonPhysicalProperties, t_CommonPhysicalProperties, CommonPhysicalProperties);

          void t_CommonPhysicalProperties::install(PyObject *module)
          {
            installType(&PY_TYPE(CommonPhysicalProperties), &PY_TYPE_DEF(CommonPhysicalProperties), module, "CommonPhysicalProperties", 0);
          }

          void t_CommonPhysicalProperties::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "class_", make_descriptor(CommonPhysicalProperties::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "wrapfn_", make_descriptor(t_CommonPhysicalProperties::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CommonPhysicalProperties::initializeClass, 1)))
              return NULL;
            return t_CommonPhysicalProperties::wrap_Object(CommonPhysicalProperties(((t_CommonPhysicalProperties *) arg)->object.this$));
          }
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CommonPhysicalProperties::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds)
          {
            CommonPhysicalProperties object((jobject) NULL);

            INT_CALL(object = CommonPhysicalProperties());
            self->object = object;

            return 0;
          }

          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self)
          {
            ::org::hipparchus::complex::Quaternion result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getReflectance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparent());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMaxRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMinRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMinRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrame(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrame", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrameEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrameEpoch", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setOebQ(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebQ", args);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setReflectance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReflectance", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmAbsolute(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmAbsolute", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparent(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparent", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CommonPhysicalProperties), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMaxRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMinRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "minRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrame(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrame", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrameEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrameEpoch", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::hipparchus::complex::Quaternion value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
          }

          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "rcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getReflectance());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setReflectance(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "reflectance", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmAbsolute(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmAbsolute", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparent());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparent(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparent", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMin", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonAdditionalDerivativesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *PythonAdditionalDerivativesProvider::mids$ = NULL;
        bool PythonAdditionalDerivativesProvider::live$ = false;

        jclass PythonAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_f7e02f1d7093fbbb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_97df9017614a1945] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdditionalDerivativesProvider::PythonAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAdditionalDerivativesProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_PythonAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAdditionalDerivativesProvider_init_(t_PythonAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAdditionalDerivativesProvider_finalize(t_PythonAdditionalDerivativesProvider *self);
        static PyObject *t_PythonAdditionalDerivativesProvider_pythonExtension(t_PythonAdditionalDerivativesProvider *self, PyObject *args);
        static jobject JNICALL t_PythonAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonAdditionalDerivativesProvider_get__self(t_PythonAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_PythonAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAdditionalDerivativesProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_PythonAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAdditionalDerivativesProvider_init_ },
          { Py_tp_getset, t_PythonAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAdditionalDerivativesProvider, t_PythonAdditionalDerivativesProvider, PythonAdditionalDerivativesProvider);

        void t_PythonAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAdditionalDerivativesProvider), &PY_TYPE_DEF(PythonAdditionalDerivativesProvider), module, "PythonAdditionalDerivativesProvider", 1);
        }

        void t_PythonAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "class_", make_descriptor(PythonAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_PythonAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAdditionalDerivativesProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;", (void *) t_PythonAdditionalDerivativesProvider_combinedDerivatives0 },
            { "getDimension", "()I", (void *) t_PythonAdditionalDerivativesProvider_getDimension1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonAdditionalDerivativesProvider_getName2 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonAdditionalDerivativesProvider_init3 },
            { "pythonDecRef", "()V", (void *) t_PythonAdditionalDerivativesProvider_pythonDecRef4 },
            { "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z", (void *) t_PythonAdditionalDerivativesProvider_yields5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAdditionalDerivativesProvider::wrap_Object(PythonAdditionalDerivativesProvider(((t_PythonAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAdditionalDerivativesProvider_init_(t_PythonAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonAdditionalDerivativesProvider object((jobject) NULL);

          INT_CALL(object = PythonAdditionalDerivativesProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_finalize(t_PythonAdditionalDerivativesProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_pythonExtension(t_PythonAdditionalDerivativesProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::CombinedDerivatives value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "combinedDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::CombinedDerivatives::initializeClass, &value))
          {
            throwTypeError("combinedDerivatives", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jint JNICALL t_PythonAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "yields", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("yields", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_get__self(t_PythonAdditionalDerivativesProvider *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSPhaseModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSPhaseModifier::live$ = false;

          jclass ShapiroOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSPhaseModifier::ShapiroOneWayGNSSPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          ::java::util::List ShapiroOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void ShapiroOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSPhaseModifier, t_ShapiroOneWayGNSSPhaseModifier, ShapiroOneWayGNSSPhaseModifier);

          void t_ShapiroOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSPhaseModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSPhaseModifier), module, "ShapiroOneWayGNSSPhaseModifier", 0);
          }

          void t_ShapiroOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "class_", make_descriptor(ShapiroOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSPhaseModifier::wrap_Object(ShapiroOneWayGNSSPhaseModifier(((t_ShapiroOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
