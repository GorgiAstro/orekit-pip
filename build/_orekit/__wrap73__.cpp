#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ExceptionalDataContext.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ExceptionalDataContext::class$ = NULL;
      jmethodID *ExceptionalDataContext::mids$ = NULL;
      bool ExceptionalDataContext::live$ = false;

      jclass ExceptionalDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ExceptionalDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_fc81056d907ed286] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getFrames_ac56fa33f5ed59f4] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_df53e62f422caa08] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_6e6081b92fd46837] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_81309dd1495ca0f7] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExceptionalDataContext::ExceptionalDataContext() : ::org::orekit::data::LazyLoadedDataContext(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies ExceptionalDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_fc81056d907ed286]));
      }

      ::org::orekit::frames::LazyLoadedFrames ExceptionalDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_ac56fa33f5ed59f4]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields ExceptionalDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_df53e62f422caa08]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields ExceptionalDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_6e6081b92fd46837]));
      }

      ::org::orekit::time::LazyLoadedTimeScales ExceptionalDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_81309dd1495ca0f7]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ExceptionalDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExceptionalDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExceptionalDataContext_init_(t_ExceptionalDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ExceptionalDataContext_getCelestialBodies(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getFrames(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getGeoMagneticFields(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getGravityFields(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getTimeScales(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_get__celestialBodies(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__frames(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__geoMagneticFields(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__gravityFields(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__timeScales(t_ExceptionalDataContext *self, void *data);
      static PyGetSetDef t_ExceptionalDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_ExceptionalDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, frames),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, gravityFields),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ExceptionalDataContext__methods_[] = {
        DECLARE_METHOD(t_ExceptionalDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExceptionalDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExceptionalDataContext, getCelestialBodies, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getFrames, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getGeoMagneticFields, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getGravityFields, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getTimeScales, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExceptionalDataContext)[] = {
        { Py_tp_methods, t_ExceptionalDataContext__methods_ },
        { Py_tp_init, (void *) t_ExceptionalDataContext_init_ },
        { Py_tp_getset, t_ExceptionalDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExceptionalDataContext)[] = {
        &PY_TYPE_DEF(::org::orekit::data::LazyLoadedDataContext),
        NULL
      };

      DEFINE_TYPE(ExceptionalDataContext, t_ExceptionalDataContext, ExceptionalDataContext);

      void t_ExceptionalDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(ExceptionalDataContext), &PY_TYPE_DEF(ExceptionalDataContext), module, "ExceptionalDataContext", 0);
      }

      void t_ExceptionalDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "class_", make_descriptor(ExceptionalDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "wrapfn_", make_descriptor(t_ExceptionalDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExceptionalDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExceptionalDataContext::initializeClass, 1)))
          return NULL;
        return t_ExceptionalDataContext::wrap_Object(ExceptionalDataContext(((t_ExceptionalDataContext *) arg)->object.this$));
      }
      static PyObject *t_ExceptionalDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExceptionalDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExceptionalDataContext_init_(t_ExceptionalDataContext *self, PyObject *args, PyObject *kwds)
      {
        ExceptionalDataContext object((jobject) NULL);

        INT_CALL(object = ExceptionalDataContext());
        self->object = object;

        return 0;
      }

      static PyObject *t_ExceptionalDataContext_getCelestialBodies(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getCelestialBodies());
          return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getCelestialBodies", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getFrames(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getFrames());
          return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getFrames", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getGeoMagneticFields(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getGeoMagneticFields", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getGravityFields(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGravityFields());
          return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getGravityFields", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getTimeScales(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTimeScales());
          return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getTimeScales", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_get__celestialBodies(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__frames(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__geoMagneticFields(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__gravityFields(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__timeScales(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ZeisModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ZeisModel::class$ = NULL;
            jmethodID *ZeisModel::mids$ = NULL;
            bool ZeisModel::live$ = false;

            jclass ZeisModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ZeisModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeC2Z_88b57c541cd2b921] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)D");
                mids$[mid_computeC2Z_8493f9d5b8291733] = env->getMethodID(cls, "computeC2Z", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_03e8bdfa525c3779] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_1a8550c5c09a5c40] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ZeisModel::ZeisModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jdouble ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_computeC2Z_88b57c541cd2b921], a0.this$);
            }

            ::org::hipparchus::CalculusFieldElement ZeisModel::computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeC2Z_8493f9d5b8291733], a0.this$));
            }

            JArray< jdouble > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_03e8bdfa525c3779], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > ZeisModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_1a8550c5c09a5c40], a0.this$));
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
            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args);
            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args);

            static PyMethodDef t_ZeisModel__methods_[] = {
              DECLARE_METHOD(t_ZeisModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ZeisModel, computeC2Z, METH_VARARGS),
              DECLARE_METHOD(t_ZeisModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ZeisModel)[] = {
              { Py_tp_methods, t_ZeisModel__methods_ },
              { Py_tp_init, (void *) t_ZeisModel_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ZeisModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ZeisModel, t_ZeisModel, ZeisModel);

            void t_ZeisModel::install(PyObject *module)
            {
              installType(&PY_TYPE(ZeisModel), &PY_TYPE_DEF(ZeisModel), module, "ZeisModel", 0);
            }

            void t_ZeisModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "class_", make_descriptor(ZeisModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "wrapfn_", make_descriptor(t_ZeisModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ZeisModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ZeisModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ZeisModel::initializeClass, 1)))
                return NULL;
              return t_ZeisModel::wrap_Object(ZeisModel(((t_ZeisModel *) arg)->object.this$));
            }
            static PyObject *t_ZeisModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ZeisModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ZeisModel_init_(t_ZeisModel *self, PyObject *args, PyObject *kwds)
            {
              ZeisModel object((jobject) NULL);

              INT_CALL(object = ZeisModel());
              self->object = object;

              return 0;
            }

            static PyObject *t_ZeisModel_computeC2Z(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  jdouble result;

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeC2Z(a0));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeC2Z", args);
              return NULL;
            }

            static PyObject *t_ZeisModel_computeMeanEquinoctialSecondOrderTerms(t_ZeisModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
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
#include "org/orekit/estimation/sequential/PythonKalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonKalmanObserver::class$ = NULL;
        jmethodID *PythonKalmanObserver::mids$ = NULL;
        bool PythonKalmanObserver::live$ = false;

        jclass PythonKalmanObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonKalmanObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_d76c6ca9a1d073d2] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanObserver::PythonKalmanObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonKalmanObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonKalmanObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonKalmanObserver::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      namespace sequential {
        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self);
        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args);
        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data);
        static PyGetSetDef t_PythonKalmanObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonKalmanObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonKalmanObserver__methods_[] = {
          DECLARE_METHOD(t_PythonKalmanObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonKalmanObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonKalmanObserver)[] = {
          { Py_tp_methods, t_PythonKalmanObserver__methods_ },
          { Py_tp_init, (void *) t_PythonKalmanObserver_init_ },
          { Py_tp_getset, t_PythonKalmanObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonKalmanObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonKalmanObserver, t_PythonKalmanObserver, PythonKalmanObserver);

        void t_PythonKalmanObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonKalmanObserver), &PY_TYPE_DEF(PythonKalmanObserver), module, "PythonKalmanObserver", 1);
        }

        void t_PythonKalmanObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "class_", make_descriptor(PythonKalmanObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "wrapfn_", make_descriptor(t_PythonKalmanObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonKalmanObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V", (void *) t_PythonKalmanObserver_evaluationPerformed0 },
            { "pythonDecRef", "()V", (void *) t_PythonKalmanObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonKalmanObserver::initializeClass, 1)))
            return NULL;
          return t_PythonKalmanObserver::wrap_Object(PythonKalmanObserver(((t_PythonKalmanObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonKalmanObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonKalmanObserver object((jobject) NULL);

          INT_CALL(object = PythonKalmanObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args)
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

        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::sequential::t_KalmanEstimation::wrap_Object(::org::orekit::estimation::sequential::KalmanEstimation(a0));
          PyObject *result = PyObject_CallMethod(obj, "evaluationPerformed", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data)
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
#include "org/orekit/geometry/fov/EllipticalFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *EllipticalFieldOfView::class$ = NULL;
        jmethodID *EllipticalFieldOfView::mids$ = NULL;
        bool EllipticalFieldOfView::live$ = false;

        jclass EllipticalFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/EllipticalFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3b428f774cad46a6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDD)V");
            mids$[mid_getFocus1_d52645e0d4c07563] = env->getMethodID(cls, "getFocus1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFocus2_d52645e0d4c07563] = env->getMethodID(cls, "getFocus2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHalfApertureAlongX_dff5885c2c873297] = env->getMethodID(cls, "getHalfApertureAlongX", "()D");
            mids$[mid_getHalfApertureAlongY_dff5885c2c873297] = env->getMethodID(cls, "getHalfApertureAlongY", "()D");
            mids$[mid_offsetFromBoundary_92bc6ba59ebf6937] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_d0fe714ef34714f7] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_9137bba253a33d9c] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipticalFieldOfView::EllipticalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_3b428f774cad46a6, a0.this$, a1.this$, a2, a3, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus1() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus1_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus2() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus2_d52645e0d4c07563]));
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongX_dff5885c2c873297]);
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongY_dff5885c2c873297]);
        }

        jdouble EllipticalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_92bc6ba59ebf6937], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_d0fe714ef34714f7], a0.this$));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data);
        static PyGetSetDef t_EllipticalFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus1),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus2),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongX),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongY),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipticalFieldOfView__methods_[] = {
          DECLARE_METHOD(t_EllipticalFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus1, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus2, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongX, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongY, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipticalFieldOfView)[] = {
          { Py_tp_methods, t_EllipticalFieldOfView__methods_ },
          { Py_tp_init, (void *) t_EllipticalFieldOfView_init_ },
          { Py_tp_getset, t_EllipticalFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipticalFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(EllipticalFieldOfView, t_EllipticalFieldOfView, EllipticalFieldOfView);

        void t_EllipticalFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipticalFieldOfView), &PY_TYPE_DEF(EllipticalFieldOfView), module, "EllipticalFieldOfView", 0);
        }

        void t_EllipticalFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "class_", make_descriptor(EllipticalFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "wrapfn_", make_descriptor(t_EllipticalFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipticalFieldOfView::initializeClass, 1)))
            return NULL;
          return t_EllipticalFieldOfView::wrap_Object(EllipticalFieldOfView(((t_EllipticalFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipticalFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          EllipticalFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EllipticalFieldOfView(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/PythonEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *PythonEncounterLOF::class$ = NULL;
        jmethodID *PythonEncounterLOF::mids$ = NULL;
        bool PythonEncounterLOF::live$ = false;

        jclass PythonEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_d52645e0d4c07563] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_90f77345373c3eb7] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOther_9b7c658c14883c84] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_d59b144da7c7851f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_2ba248090f65b129] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEncounterLOF::PythonEncounterLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEncounterLOF::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
    namespace frames {
      namespace encounter {
        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self);
        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEncounterLOF)[] = {
          { Py_tp_methods, t_PythonEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonEncounterLOF_init_ },
          { Py_tp_getset, t_PythonEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEncounterLOF, t_PythonEncounterLOF, PythonEncounterLOF);

        void t_PythonEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEncounterLOF), &PY_TYPE_DEF(PythonEncounterLOF), module, "PythonEncounterLOF", 1);
        }

        void t_PythonEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "class_", make_descriptor(PythonEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "wrapfn_", make_descriptor(t_PythonEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;", (void *) t_PythonEncounterLOF_getFieldOther2 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonEncounterLOF_getName3 },
            { "getOther", "()Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonEncounterLOF_getOther4 },
            { "pythonDecRef", "()V", (void *) t_PythonEncounterLOF_pythonDecRef5 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonEncounterLOF_rotationFromInertial6 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonEncounterLOF_rotationFromInertial7 },
          };
          env->registerNatives(cls, methods, 8);
        }

        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonEncounterLOF::wrap_Object(PythonEncounterLOF(((t_PythonEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          PythonEncounterLOF object((jobject) NULL);

          INT_CALL(object = PythonEncounterLOF());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getFieldOther", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &value))
          {
            throwTypeError("getFieldOther", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOther", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
          {
            throwTypeError("getOther", result);
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

        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a0));
          PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a1));
          PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data)
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
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        ::java::lang::Class *ProbabilityOfCollision::class$ = NULL;
        jmethodID *ProbabilityOfCollision::mids$ = NULL;
        bool ProbabilityOfCollision::live$ = false;

        jclass ProbabilityOfCollision::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/ssa/metrics/ProbabilityOfCollision");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0f9c4af43dc22978] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;)V");
            mids$[mid_init$_92c7581d14340df5] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;Z)V");
            mids$[mid_init$_2bc6d6d620f99f0a] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Z)V");
            mids$[mid_getLowerLimit_dff5885c2c873297] = env->getMethodID(cls, "getLowerLimit", "()D");
            mids$[mid_getProbabilityOfCollisionMethodName_11b109bd155ca898] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_dff5885c2c873297] = env->getMethodID(cls, "getUpperLimit", "()D");
            mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_isMaxProbability_b108b35ef48e27bd] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f9c4af43dc22978, a0, a1.this$)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_92c7581d14340df5, a0, a1.this$, a2)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2bc6d6d620f99f0a, a0, a1, a2, a3.this$, a4)) {}

        jdouble ProbabilityOfCollision::getLowerLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerLimit_dff5885c2c873297]);
        }

        ::java::lang::String ProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_11b109bd155ca898]));
        }

        jdouble ProbabilityOfCollision::getUpperLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperLimit_dff5885c2c873297]);
        }

        jdouble ProbabilityOfCollision::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
        }

        jboolean ProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_b108b35ef48e27bd]);
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
    namespace ssa {
      namespace metrics {
        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data);
        static PyGetSetDef t_ProbabilityOfCollision__fields_[] = {
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, lowerLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, maxProbability),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, probabilityOfCollisionMethodName),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, upperLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProbabilityOfCollision__methods_[] = {
          DECLARE_METHOD(t_ProbabilityOfCollision, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getLowerLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getProbabilityOfCollisionMethodName, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getUpperLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getValue, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, isMaxProbability, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProbabilityOfCollision)[] = {
          { Py_tp_methods, t_ProbabilityOfCollision__methods_ },
          { Py_tp_init, (void *) t_ProbabilityOfCollision_init_ },
          { Py_tp_getset, t_ProbabilityOfCollision__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProbabilityOfCollision)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProbabilityOfCollision, t_ProbabilityOfCollision, ProbabilityOfCollision);

        void t_ProbabilityOfCollision::install(PyObject *module)
        {
          installType(&PY_TYPE(ProbabilityOfCollision), &PY_TYPE_DEF(ProbabilityOfCollision), module, "ProbabilityOfCollision", 0);
        }

        void t_ProbabilityOfCollision::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "class_", make_descriptor(ProbabilityOfCollision::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "wrapfn_", make_descriptor(t_ProbabilityOfCollision::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProbabilityOfCollision::initializeClass, 1)))
            return NULL;
          return t_ProbabilityOfCollision::wrap_Object(ProbabilityOfCollision(((t_ProbabilityOfCollision *) arg)->object.this$));
        }
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProbabilityOfCollision::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "Ds", &a0, &a1))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              jboolean a2;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DsZ", &a0, &a1, &a2))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::java::lang::String a3((jobject) NULL);
              jboolean a4;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DDDsZ", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2, a3, a4));
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

        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProbabilityOfCollisionMethodName());
          return j2p(result);
        }

        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isMaxProbability());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isMaxProbability());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProbabilityOfCollisionMethodName());
          return j2p(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/FiniteDifferencePropagatorConverter.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *FiniteDifferencePropagatorConverter::class$ = NULL;
        jmethodID *FiniteDifferencePropagatorConverter::mids$ = NULL;
        bool FiniteDifferencePropagatorConverter::live$ = false;

        jclass FiniteDifferencePropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/FiniteDifferencePropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_78073cb29f7a4fd8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_getModel_9751b2e3b68b45ea] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_18d8e6aab2238577] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencePropagatorConverter::FiniteDifferencePropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_78073cb29f7a4fd8, a0.this$, a1, a2)) {}
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
      namespace conversion {
        static PyObject *t_FiniteDifferencePropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FiniteDifferencePropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FiniteDifferencePropagatorConverter_init_(t_FiniteDifferencePropagatorConverter *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_FiniteDifferencePropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_FiniteDifferencePropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencePropagatorConverter, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FiniteDifferencePropagatorConverter)[] = {
          { Py_tp_methods, t_FiniteDifferencePropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_FiniteDifferencePropagatorConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FiniteDifferencePropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(FiniteDifferencePropagatorConverter, t_FiniteDifferencePropagatorConverter, FiniteDifferencePropagatorConverter);

        void t_FiniteDifferencePropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(FiniteDifferencePropagatorConverter), &PY_TYPE_DEF(FiniteDifferencePropagatorConverter), module, "FiniteDifferencePropagatorConverter", 0);
        }

        void t_FiniteDifferencePropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "class_", make_descriptor(FiniteDifferencePropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "wrapfn_", make_descriptor(t_FiniteDifferencePropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencePropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FiniteDifferencePropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FiniteDifferencePropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_FiniteDifferencePropagatorConverter::wrap_Object(FiniteDifferencePropagatorConverter(((t_FiniteDifferencePropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_FiniteDifferencePropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FiniteDifferencePropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FiniteDifferencePropagatorConverter_init_(t_FiniteDifferencePropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          FiniteDifferencePropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = FiniteDifferencePropagatorConverter(a0, a1, a2));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Iterator::class$ = NULL;
    jmethodID *Iterator::mids$ = NULL;
    bool Iterator::live$ = false;

    jclass Iterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Iterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_hasNext_b108b35ef48e27bd] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_next_4d26fd885228c716] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_remove_0fa09c18fee449d5] = env->getMethodID(cls, "remove", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Iterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_b108b35ef48e27bd]);
    }

    ::java::lang::Object Iterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_4d26fd885228c716]));
    }

    void Iterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_0fa09c18fee449d5]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args);
    static PyObject *t_Iterator_hasNext(t_Iterator *self);
    static PyObject *t_Iterator_next(t_Iterator *self);
    static PyObject *t_Iterator_remove(t_Iterator *self);
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data);
    static PyGetSetDef t_Iterator__fields_[] = {
      DECLARE_GET_FIELD(t_Iterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Iterator__methods_[] = {
      DECLARE_METHOD(t_Iterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Iterator, hasNext, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, next, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, remove, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Iterator)[] = {
      { Py_tp_methods, t_Iterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Iterator__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_generic_iterator_next< ::java::util::t_Iterator,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Iterator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Iterator, t_Iterator, Iterator);
    PyObject *t_Iterator::wrap_Object(const Iterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Iterator::install(PyObject *module)
    {
      installType(&PY_TYPE(Iterator), &PY_TYPE_DEF(Iterator), module, "Iterator", 0);
    }

    void t_Iterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "class_", make_descriptor(Iterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "wrapfn_", make_descriptor(t_Iterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Iterator::initializeClass, 1)))
        return NULL;
      return t_Iterator::wrap_Object(Iterator(((t_Iterator *) arg)->object.this$));
    }
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Iterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Iterator_hasNext(t_Iterator *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasNext());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Iterator_next(t_Iterator *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.next());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Iterator_remove(t_Iterator *self)
    {
      OBJ_CALL(self->object.remove());
      Py_RETURN_NONE;
    }
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoublyIndexedDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$DoublyIndexedDoubleConsumer::mids$ = NULL;
            bool ParseToken$DoublyIndexedDoubleConsumer::live$ = false;

            jclass ParseToken$DoublyIndexedDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_1506189166690b5e] = env->getMethodID(cls, "accept", "(IID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoublyIndexedDoubleConsumer::accept(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_1506189166690b5e], a0, a1, a2);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_accept(t_ParseToken$DoublyIndexedDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$DoublyIndexedDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoublyIndexedDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoublyIndexedDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoublyIndexedDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoublyIndexedDoubleConsumer, t_ParseToken$DoublyIndexedDoubleConsumer, ParseToken$DoublyIndexedDoubleConsumer);

            void t_ParseToken$DoublyIndexedDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), &PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer), module, "ParseToken$DoublyIndexedDoubleConsumer", 0);
            }

            void t_ParseToken$DoublyIndexedDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "class_", make_descriptor(ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoublyIndexedDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoublyIndexedDoubleConsumer::wrap_Object(ParseToken$DoublyIndexedDoubleConsumer(((t_ParseToken$DoublyIndexedDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_accept(t_ParseToken$DoublyIndexedDoubleConsumer *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.accept(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockFieldMatrix::class$ = NULL;
      jmethodID *BlockFieldMatrix::mids$ = NULL;
      bool BlockFieldMatrix::live$ = false;
      jint BlockFieldMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b797e11157f10d97] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_7dbd657fb2d34563] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_init$_2f8d6f7ef9f03a72] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_add_b6be95562ce45139] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_add_1409f31dc074a11f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_d302e4fbc652587d] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_c992983685c753c5] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createBlocksLayout_9d0b4d67c7d5ec91] = env->getStaticMethodID(cls, "createBlocksLayout", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_createMatrix_5d35d650870a3dcb] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_b21ddf58698298c0] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_d85895e9fba6ff1d] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_819edc89e6437565] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_75f68840bec35355] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_ef29faa67be274b8] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_b21ddf58698298c0] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_d85895e9fba6ff1d] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_819edc89e6437565] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_1033b0d2443c0299] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_b6be95562ce45139] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiply_1409f31dc074a11f] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_d302e4fbc652587d] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_b6be95562ce45139] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiplyTransposed_c288279d5a20d935] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_operate_91d3c6b4d1752243] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_91d3c6b4d1752243] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_scalarAdd_57b87e024c8cac75] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_57b87e024c8cac75] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_baf264dbcc1722ae] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_1fbbd8b62d351fe3] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_0c5a38a1f7c3f4d4] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_d302e4fbc652587d] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_baf264dbcc1722ae] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_40df8476c629becb] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockFieldMatrix;)V");
          mids$[mid_setRowMatrix_1fbbd8b62d351fe3] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_0c5a38a1f7c3f4d4] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_e8cdaf624d2bb79a] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_b6be95562ce45139] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_subtract_1409f31dc074a11f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toBlocksLayout_b3898de28104811f] = env->getStaticMethodID(cls, "toBlocksLayout", "([[Lorg/hipparchus/FieldElement;)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_transpose_c992983685c753c5] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_b6be95562ce45139] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_transposeMultiply_c288279d5a20d935] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_walkInOptimizedOrder_624c889f4088e148] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_624c889f4088e148] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockFieldMatrix::BlockFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_b797e11157f10d97, a0.this$)) {}

      BlockFieldMatrix::BlockFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_7dbd657fb2d34563, a0.this$, a1, a2)) {}

      BlockFieldMatrix::BlockFieldMatrix(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_2f8d6f7ef9f03a72, a0, a1, a2.this$, a3)) {}

      BlockFieldMatrix BlockFieldMatrix::add(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_b6be95562ce45139], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_1409f31dc074a11f], a0.this$));
      }

      void BlockFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_c992983685c753c5]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::createBlocksLayout(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_9d0b4d67c7d5ec91], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_5d35d650870a3dcb], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_b21ddf58698298c0], a0));
      }

      jint BlockFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_d85895e9fba6ff1d], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_819edc89e6437565], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_75f68840bec35355]));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_ef29faa67be274b8], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_b21ddf58698298c0], a0));
      }

      jint BlockFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_d85895e9fba6ff1d], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_819edc89e6437565], a0));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_1033b0d2443c0299], a0, a1, a2, a3));
      }

      BlockFieldMatrix BlockFieldMatrix::multiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_b6be95562ce45139], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_1409f31dc074a11f], a0.this$));
      }

      void BlockFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_b6be95562ce45139], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_c288279d5a20d935], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_91d3c6b4d1752243], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_91d3c6b4d1752243], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_57b87e024c8cac75], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_57b87e024c8cac75], a0.this$));
      }

      void BlockFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_baf264dbcc1722ae], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_1fbbd8b62d351fe3], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_0c5a38a1f7c3f4d4], a0, a1.this$);
      }

      void BlockFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      void BlockFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_baf264dbcc1722ae], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const BlockFieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_40df8476c629becb], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_1fbbd8b62d351fe3], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_0c5a38a1f7c3f4d4], a0, a1.this$);
      }

      void BlockFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_e8cdaf624d2bb79a], a0.this$, a1, a2);
      }

      BlockFieldMatrix BlockFieldMatrix::subtract(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_b6be95562ce45139], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_1409f31dc074a11f], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::toBlocksLayout(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_b3898de28104811f], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_c992983685c753c5]));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_b6be95562ce45139], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_c288279d5a20d935], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args);
      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data);
      static PyGetSetDef t_BlockFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, data),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockFieldMatrix)[] = {
        { Py_tp_methods, t_BlockFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockFieldMatrix_init_ },
        { Py_tp_getset, t_BlockFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(BlockFieldMatrix, t_BlockFieldMatrix, BlockFieldMatrix);
      PyObject *t_BlockFieldMatrix::wrap_Object(const BlockFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BlockFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BlockFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockFieldMatrix), &PY_TYPE_DEF(BlockFieldMatrix), module, "BlockFieldMatrix", 0);
      }

      void t_BlockFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "class_", make_descriptor(BlockFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "wrapfn_", make_descriptor(t_BlockFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockFieldMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "BLOCK_SIZE", make_descriptor(BlockFieldMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockFieldMatrix::wrap_Object(BlockFieldMatrix(((t_BlockFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = BlockFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::createBlocksLayout(a0, a1, a2));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockFieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", BlockFieldMatrix::initializeClass, &a0, &a1, &p1, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPHistory::class$ = NULL;
      jmethodID *EOPHistory::mids$ = NULL;
      bool EOPHistory::live$ = false;
      jint EOPHistory::DEFAULT_INTERPOLATION_DEGREE = (jint) 0;

      jclass EOPHistory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPHistory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4a3c17d419eb577d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;ILjava/util/Collection;ZLorg/orekit/time/TimeScales;)V");
          mids$[mid_cachesTidalCorrection_b108b35ef48e27bd] = env->getMethodID(cls, "cachesTidalCorrection", "()Z");
          mids$[mid_checkEOPContinuity_17db3a65980d3441] = env->getMethodID(cls, "checkEOPContinuity", "(D)V");
          mids$[mid_getConventions_60f9ded87ab7ca4c] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_a75a6d9d92c81a5e] = env->getMethodID(cls, "getEOPHistoryWithoutCachedTidalCorrection", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEndDate_85703d13e302437e] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEntries_2afa36052df4765d] = env->getMethodID(cls, "getEntries", "()Ljava/util/List;");
          mids$[mid_getEquinoxNutationCorrection_2b9aa40de0a696a4] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getEquinoxNutationCorrection_1d12c7a27955163b] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getITRFVersion_7516dbdbd6368e44] = env->getMethodID(cls, "getITRFVersion", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getInterpolationDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationDegree", "()I");
          mids$[mid_getLOD_bf1d7732f1acb697] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLOD_2a5f05be83ff251d] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNonRotatinOriginNutationCorrection_2b9aa40de0a696a4] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getNonRotatinOriginNutationCorrection_1d12c7a27955163b] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPoleCorrection_6d8f033f24b22917] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/PoleCorrection;");
          mids$[mid_getPoleCorrection_78539f38afd6a92e] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldPoleCorrection;");
          mids$[mid_getStartDate_85703d13e302437e] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTimeScales_f0675560047d99cd] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_getUT1MinusUTC_bf1d7732f1acb697] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getUT1MinusUTC_2a5f05be83ff251d] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_isSimpleEop_b108b35ef48e27bd] = env->getMethodID(cls, "isSimpleEop", "()Z");
          mids$[mid_getNeighbors_a067290de6165283] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_hasDataFor_db6d81809797ddaa] = env->getMethodID(cls, "hasDataFor", "(Lorg/orekit/time/AbsoluteDate;)Z");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPHistory::EOPHistory(const ::org::orekit::utils::IERSConventions & a0, jint a1, const ::java::util::Collection & a2, jboolean a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a3c17d419eb577d, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      jboolean EOPHistory::cachesTidalCorrection() const
      {
        return env->callBooleanMethod(this$, mids$[mid_cachesTidalCorrection_b108b35ef48e27bd]);
      }

      void EOPHistory::checkEOPContinuity(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_checkEOPContinuity_17db3a65980d3441], a0);
      }

      ::org::orekit::utils::IERSConventions EOPHistory::getConventions() const
      {
        return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_60f9ded87ab7ca4c]));
      }

      EOPHistory EOPHistory::getEOPHistoryWithoutCachedTidalCorrection() const
      {
        return EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_a75a6d9d92c81a5e]));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getEndDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_85703d13e302437e]));
      }

      ::java::util::List EOPHistory::getEntries() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEntries_2afa36052df4765d]));
      }

      JArray< jdouble > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_2b9aa40de0a696a4], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_1d12c7a27955163b], a0.this$));
      }

      ::org::orekit::frames::ITRFVersion EOPHistory::getITRFVersion(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_7516dbdbd6368e44], a0.this$));
      }

      jint EOPHistory::getInterpolationDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_570ce0828f81a2c1]);
      }

      jdouble EOPHistory::getLOD(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getLOD(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLOD_2a5f05be83ff251d], a0.this$));
      }

      JArray< jdouble > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_2b9aa40de0a696a4], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_1d12c7a27955163b], a0.this$));
      }

      ::org::orekit::frames::PoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::PoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_6d8f033f24b22917], a0.this$));
      }

      ::org::orekit::frames::FieldPoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldPoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_78539f38afd6a92e], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getStartDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_85703d13e302437e]));
      }

      ::org::orekit::time::TimeScales EOPHistory::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_f0675560047d99cd]));
      }

      jdouble EOPHistory::getUT1MinusUTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getUT1MinusUTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUT1MinusUTC_2a5f05be83ff251d], a0.this$));
      }

      jboolean EOPHistory::isSimpleEop() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSimpleEop_b108b35ef48e27bd]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_EOPHistory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPHistory_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPHistory_init_(t_EOPHistory *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPHistory_cachesTidalCorrection(t_EOPHistory *self);
      static PyObject *t_EOPHistory_checkEOPContinuity(t_EOPHistory *self, PyObject *arg);
      static PyObject *t_EOPHistory_getConventions(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEndDate(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEntries(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEquinoxNutationCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getITRFVersion(t_EOPHistory *self, PyObject *arg);
      static PyObject *t_EOPHistory_getInterpolationDegree(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getLOD(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getNonRotatinOriginNutationCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getPoleCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getStartDate(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getTimeScales(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getUT1MinusUTC(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_isSimpleEop(t_EOPHistory *self);
      static PyObject *t_EOPHistory_get__conventions(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__eOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__endDate(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__entries(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__interpolationDegree(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__simpleEop(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__startDate(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__timeScales(t_EOPHistory *self, void *data);
      static PyGetSetDef t_EOPHistory__fields_[] = {
        DECLARE_GET_FIELD(t_EOPHistory, conventions),
        DECLARE_GET_FIELD(t_EOPHistory, eOPHistoryWithoutCachedTidalCorrection),
        DECLARE_GET_FIELD(t_EOPHistory, endDate),
        DECLARE_GET_FIELD(t_EOPHistory, entries),
        DECLARE_GET_FIELD(t_EOPHistory, interpolationDegree),
        DECLARE_GET_FIELD(t_EOPHistory, simpleEop),
        DECLARE_GET_FIELD(t_EOPHistory, startDate),
        DECLARE_GET_FIELD(t_EOPHistory, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPHistory__methods_[] = {
        DECLARE_METHOD(t_EOPHistory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPHistory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPHistory, cachesTidalCorrection, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, checkEOPContinuity, METH_O),
        DECLARE_METHOD(t_EOPHistory, getConventions, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEOPHistoryWithoutCachedTidalCorrection, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEndDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEntries, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEquinoxNutationCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getITRFVersion, METH_O),
        DECLARE_METHOD(t_EOPHistory, getInterpolationDegree, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getLOD, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getNonRotatinOriginNutationCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getPoleCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getStartDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getTimeScales, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getUT1MinusUTC, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, isSimpleEop, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPHistory)[] = {
        { Py_tp_methods, t_EOPHistory__methods_ },
        { Py_tp_init, (void *) t_EOPHistory_init_ },
        { Py_tp_getset, t_EOPHistory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPHistory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPHistory, t_EOPHistory, EOPHistory);

      void t_EOPHistory::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPHistory), &PY_TYPE_DEF(EOPHistory), module, "EOPHistory", 0);
      }

      void t_EOPHistory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "class_", make_descriptor(EOPHistory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "wrapfn_", make_descriptor(t_EOPHistory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "boxfn_", make_descriptor(boxObject));
        env->getClass(EOPHistory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "DEFAULT_INTERPOLATION_DEGREE", make_descriptor(EOPHistory::DEFAULT_INTERPOLATION_DEGREE));
      }

      static PyObject *t_EOPHistory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPHistory::initializeClass, 1)))
          return NULL;
        return t_EOPHistory::wrap_Object(EOPHistory(((t_EOPHistory *) arg)->object.this$));
      }
      static PyObject *t_EOPHistory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPHistory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPHistory_init_(t_EOPHistory *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::java::util::Collection a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean a3;
        ::org::orekit::time::TimeScales a4((jobject) NULL);
        EOPHistory object((jobject) NULL);

        if (!parseArgs(args, "KIKZk", ::org::orekit::utils::IERSConventions::initializeClass, ::java::util::Collection::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
        {
          INT_CALL(object = EOPHistory(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPHistory_cachesTidalCorrection(t_EOPHistory *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.cachesTidalCorrection());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EOPHistory_checkEOPContinuity(t_EOPHistory *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.checkEOPContinuity(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "checkEOPContinuity", arg);
        return NULL;
      }

      static PyObject *t_EOPHistory_getConventions(t_EOPHistory *self)
      {
        ::org::orekit::utils::IERSConventions result((jobject) NULL);
        OBJ_CALL(result = self->object.getConventions());
        return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self)
      {
        EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistoryWithoutCachedTidalCorrection());
        return t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEndDate(t_EOPHistory *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEndDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEntries(t_EOPHistory *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEntries());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(EOPEntry));
      }

      static PyObject *t_EOPHistory_getEquinoxNutationCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEquinoxNutationCorrection(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getEquinoxNutationCorrection(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEquinoxNutationCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getITRFVersion(t_EOPHistory *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getITRFVersion(a0));
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFVersion", arg);
        return NULL;
      }

      static PyObject *t_EOPHistory_getInterpolationDegree(t_EOPHistory *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getInterpolationDegree());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EOPHistory_getLOD(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLOD(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLOD(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLOD", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getNonRotatinOriginNutationCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNonRotatinOriginNutationCorrection(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getNonRotatinOriginNutationCorrection(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNonRotatinOriginNutationCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getPoleCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::PoleCorrection result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPoleCorrection(a0));
              return ::org::orekit::frames::t_PoleCorrection::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldPoleCorrection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPoleCorrection(a0));
              return ::org::orekit::frames::t_FieldPoleCorrection::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPoleCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getStartDate(t_EOPHistory *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getTimeScales(t_EOPHistory *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getUT1MinusUTC(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getUT1MinusUTC(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getUT1MinusUTC(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1MinusUTC", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_isSimpleEop(t_EOPHistory *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSimpleEop());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EOPHistory_get__conventions(t_EOPHistory *self, void *data)
      {
        ::org::orekit::utils::IERSConventions value((jobject) NULL);
        OBJ_CALL(value = self->object.getConventions());
        return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__eOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self, void *data)
      {
        EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistoryWithoutCachedTidalCorrection());
        return t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__endDate(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEndDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__entries(t_EOPHistory *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEntries());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__interpolationDegree(t_EOPHistory *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getInterpolationDegree());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EOPHistory_get__simpleEop(t_EOPHistory *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSimpleEop());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_EOPHistory_get__startDate(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__timeScales(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonObservedMeasurement::class$ = NULL;
        jmethodID *PythonObservedMeasurement::mids$ = NULL;
        bool PythonObservedMeasurement::live$ = false;

        jclass PythonObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addModifier_baf3397e6fffc21d] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_compareTo_aa79741dc73b1207] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_estimate_27ef5cc84ad0852b] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBaseWeight_60c7040667a7dc5c] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_11b109bd155ca898] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_2afa36052df4765d] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_60c7040667a7dc5c] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_2afa36052df4765d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_60c7040667a7dc5c] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_b108b35ef48e27bd] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEnabled_bd04c9335fb9e4cf] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonObservedMeasurement::PythonObservedMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonObservedMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonObservedMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonObservedMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args);
        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self);
        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args);
        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0);
        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data);
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data);
        static PyGetSetDef t_PythonObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, self),
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonObservedMeasurement)[] = {
          { Py_tp_methods, t_PythonObservedMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonObservedMeasurement_init_ },
          { Py_tp_getset, t_PythonObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonObservedMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonObservedMeasurement, t_PythonObservedMeasurement, PythonObservedMeasurement);
        PyObject *t_PythonObservedMeasurement::wrap_Object(const PythonObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonObservedMeasurement), &PY_TYPE_DEF(PythonObservedMeasurement), module, "PythonObservedMeasurement", 1);
        }

        void t_PythonObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "class_", make_descriptor(PythonObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "wrapfn_", make_descriptor(t_PythonObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonObservedMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonObservedMeasurement_addModifier0 },
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonObservedMeasurement_compareTo1 },
            { "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonObservedMeasurement_estimate2 },
            { "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonObservedMeasurement_estimateWithoutDerivatives3 },
            { "getBaseWeight", "()[D", (void *) t_PythonObservedMeasurement_getBaseWeight4 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonObservedMeasurement_getDate5 },
            { "getDimension", "()I", (void *) t_PythonObservedMeasurement_getDimension6 },
            { "getMeasurementType", "()Ljava/lang/String;", (void *) t_PythonObservedMeasurement_getMeasurementType7 },
            { "getModifiers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getModifiers8 },
            { "getObservedValue", "()[D", (void *) t_PythonObservedMeasurement_getObservedValue9 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getParametersDrivers10 },
            { "getSatellites", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getSatellites11 },
            { "getTheoreticalStandardDeviation", "()[D", (void *) t_PythonObservedMeasurement_getTheoreticalStandardDeviation12 },
            { "isEnabled", "()Z", (void *) t_PythonObservedMeasurement_isEnabled13 },
            { "pythonDecRef", "()V", (void *) t_PythonObservedMeasurement_pythonDecRef14 },
            { "setEnabled", "(Z)V", (void *) t_PythonObservedMeasurement_setEnabled15 },
          };
          env->registerNatives(cls, methods, 16);
        }

        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonObservedMeasurement::wrap_Object(PythonObservedMeasurement(((t_PythonObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonObservedMeasurement object((jobject) NULL);

          INT_CALL(object = PythonObservedMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
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

        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimate", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("estimate", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimateWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("estimateWithoutDerivatives", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBaseWeight", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getBaseWeight", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getDate", result);
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

        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMeasurementType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getMeasurementType", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
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

        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getTheoreticalStandardDeviation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getTheoreticalStandardDeviation", result);
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

        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isEnabled", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = (a0 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "setEnabled", "O", o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data)
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
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *TurnAroundRangeBuilder::class$ = NULL;
          jmethodID *TurnAroundRangeBuilder::mids$ = NULL;
          bool TurnAroundRangeBuilder::live$ = false;

          jclass TurnAroundRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f2d2df585c0173ae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_21e9950c877abbe4] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TurnAroundRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeBuilder::TurnAroundRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2d2df585c0173ae, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TurnAroundRange TurnAroundRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TurnAroundRange(env->callObjectMethod(this$, mids$[mid_build_21e9950c877abbe4], a0.this$, a1.this$));
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
          static PyObject *t_TurnAroundRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeBuilder_of_(t_TurnAroundRangeBuilder *self, PyObject *args);
          static int t_TurnAroundRangeBuilder_init_(t_TurnAroundRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeBuilder_build(t_TurnAroundRangeBuilder *self, PyObject *args);
          static PyObject *t_TurnAroundRangeBuilder_get__parameters_(t_TurnAroundRangeBuilder *self, void *data);
          static PyGetSetDef t_TurnAroundRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeBuilder)[] = {
            { Py_tp_methods, t_TurnAroundRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeBuilder_init_ },
            { Py_tp_getset, t_TurnAroundRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeBuilder, t_TurnAroundRangeBuilder, TurnAroundRangeBuilder);
          PyObject *t_TurnAroundRangeBuilder::wrap_Object(const TurnAroundRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TurnAroundRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TurnAroundRangeBuilder *self = (t_TurnAroundRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TurnAroundRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TurnAroundRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TurnAroundRangeBuilder *self = (t_TurnAroundRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TurnAroundRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeBuilder), &PY_TYPE_DEF(TurnAroundRangeBuilder), module, "TurnAroundRangeBuilder", 0);
          }

          void t_TurnAroundRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "class_", make_descriptor(TurnAroundRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "wrapfn_", make_descriptor(t_TurnAroundRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeBuilder::wrap_Object(TurnAroundRangeBuilder(((t_TurnAroundRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TurnAroundRangeBuilder_of_(t_TurnAroundRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_TurnAroundRangeBuilder_init_(t_TurnAroundRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            TurnAroundRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TurnAroundRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TurnAroundRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeBuilder_build(t_TurnAroundRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::TurnAroundRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_TurnAroundRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TurnAroundRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_TurnAroundRangeBuilder_get__parameters_(t_TurnAroundRangeBuilder *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/LutherIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherIntegrator::class$ = NULL;
        jmethodID *LutherIntegrator::mids$ = NULL;
        bool LutherIntegrator::live$ = false;

        jclass LutherIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_1511ce97e71b2fac] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegrator::LutherIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        JArray< JArray< jdouble > > LutherIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > LutherIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > LutherIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_60c7040667a7dc5c]));
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
        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data);
        static PyGetSetDef t_LutherIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherIntegrator, a),
          DECLARE_GET_FIELD(t_LutherIntegrator, b),
          DECLARE_GET_FIELD(t_LutherIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherIntegrator)[] = {
          { Py_tp_methods, t_LutherIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherIntegrator_init_ },
          { Py_tp_getset, t_LutherIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherIntegrator, t_LutherIntegrator, LutherIntegrator);

        void t_LutherIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherIntegrator), &PY_TYPE_DEF(LutherIntegrator), module, "LutherIntegrator", 0);
        }

        void t_LutherIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "class_", make_descriptor(LutherIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "wrapfn_", make_descriptor(t_LutherIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherIntegrator::wrap_Object(LutherIntegrator(((t_LutherIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          LutherIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = LutherIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/NadirPointing.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *NadirPointing::class$ = NULL;
      jmethodID *NadirPointing::mids$ = NULL;
      bool NadirPointing::live$ = false;

      jclass NadirPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/NadirPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a55d46b7b27e856c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_ad3e02e6f0d115f2] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_129d59e5c897146f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NadirPointing::NadirPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_a55d46b7b27e856c, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ad3e02e6f0d115f2], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_129d59e5c897146f], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_NadirPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NadirPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_NadirPointing_init_(t_NadirPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NadirPointing_getTargetPV(t_NadirPointing *self, PyObject *args);

      static PyMethodDef t_NadirPointing__methods_[] = {
        DECLARE_METHOD(t_NadirPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NadirPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NadirPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NadirPointing)[] = {
        { Py_tp_methods, t_NadirPointing__methods_ },
        { Py_tp_init, (void *) t_NadirPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NadirPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(NadirPointing, t_NadirPointing, NadirPointing);

      void t_NadirPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(NadirPointing), &PY_TYPE_DEF(NadirPointing), module, "NadirPointing", 0);
      }

      void t_NadirPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "class_", make_descriptor(NadirPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "wrapfn_", make_descriptor(t_NadirPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NadirPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NadirPointing::initializeClass, 1)))
          return NULL;
        return t_NadirPointing::wrap_Object(NadirPointing(((t_NadirPointing *) arg)->object.this$));
      }
      static PyObject *t_NadirPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NadirPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_NadirPointing_init_(t_NadirPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::BodyShape a1((jobject) NULL);
        NadirPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1))
        {
          INT_CALL(object = NadirPointing(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NadirPointing_getTargetPV(t_NadirPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbitBlender.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitBlender::class$ = NULL;
      jmethodID *FieldOrbitBlender::mids$ = NULL;
      bool FieldOrbitBlender::live$ = false;

      jclass FieldOrbitBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5426757949cd6ee5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_356bc1e00fec4509] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitBlender::FieldOrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction & a0, const ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5426757949cd6ee5, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::orbits::FieldOrbit FieldOrbitBlender::interpolate(const ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_356bc1e00fec4509], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args);
      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args);
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data);
      static PyGetSetDef t_FieldOrbitBlender__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitBlender__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitBlender, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitBlender)[] = {
        { Py_tp_methods, t_FieldOrbitBlender__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitBlender_init_ },
        { Py_tp_getset, t_FieldOrbitBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitBlender, t_FieldOrbitBlender, FieldOrbitBlender);
      PyObject *t_FieldOrbitBlender::wrap_Object(const FieldOrbitBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitBlender), &PY_TYPE_DEF(FieldOrbitBlender), module, "FieldOrbitBlender", 0);
      }

      void t_FieldOrbitBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "class_", make_descriptor(FieldOrbitBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "wrapfn_", make_descriptor(t_FieldOrbitBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitBlender::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitBlender::wrap_Object(FieldOrbitBlender(((t_FieldOrbitBlender *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        FieldOrbitBlender object((jobject) NULL);

        if (!parseArgs(args, "KKk", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction::initializeClass, ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::parameters_, &a2))
        {
          INT_CALL(object = FieldOrbitBlender(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args)
      {
        ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractFieldTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldOrbitBlender), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonAtmosphere.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonAtmosphere::class$ = NULL;
          jmethodID *PythonAtmosphere::mids$ = NULL;
          bool PythonAtmosphere::live$ = false;

          jclass PythonAtmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonAtmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDensity_b79d75c1a8af7374] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_f7d7785230311c38] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_b4b015cfdb3a2ead] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getVelocity_417ea3d5e6de26e5] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAtmosphere::PythonAtmosphere() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonAtmosphere::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAtmosphere::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAtmosphere::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonAtmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAtmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAtmosphere_init_(t_PythonAtmosphere *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAtmosphere_finalize(t_PythonAtmosphere *self);
          static PyObject *t_PythonAtmosphere_pythonExtension(t_PythonAtmosphere *self, PyObject *args);
          static jdouble JNICALL t_PythonAtmosphere_getDensity0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getDensity1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getFrame2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAtmosphere_getVelocity3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getVelocity4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonAtmosphere_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAtmosphere_get__self(t_PythonAtmosphere *self, void *data);
          static PyGetSetDef t_PythonAtmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAtmosphere, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAtmosphere__methods_[] = {
            DECLARE_METHOD(t_PythonAtmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAtmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAtmosphere, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAtmosphere, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphere)[] = {
            { Py_tp_methods, t_PythonAtmosphere__methods_ },
            { Py_tp_init, (void *) t_PythonAtmosphere_init_ },
            { Py_tp_getset, t_PythonAtmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAtmosphere)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonAtmosphere, t_PythonAtmosphere, PythonAtmosphere);

          void t_PythonAtmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAtmosphere), &PY_TYPE_DEF(PythonAtmosphere), module, "PythonAtmosphere", 1);
          }

          void t_PythonAtmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "class_", make_descriptor(PythonAtmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "wrapfn_", make_descriptor(t_PythonAtmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAtmosphere::initializeClass);
            JNINativeMethod methods[] = {
              { "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D", (void *) t_PythonAtmosphere_getDensity0 },
              { "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAtmosphere_getDensity1 },
              { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonAtmosphere_getFrame2 },
              { "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAtmosphere_getVelocity3 },
              { "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAtmosphere_getVelocity4 },
              { "pythonDecRef", "()V", (void *) t_PythonAtmosphere_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonAtmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAtmosphere::initializeClass, 1)))
              return NULL;
            return t_PythonAtmosphere::wrap_Object(PythonAtmosphere(((t_PythonAtmosphere *) arg)->object.this$));
          }
          static PyObject *t_PythonAtmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAtmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAtmosphere_init_(t_PythonAtmosphere *self, PyObject *args, PyObject *kwds)
          {
            PythonAtmosphere object((jobject) NULL);

            INT_CALL(object = PythonAtmosphere());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAtmosphere_finalize(t_PythonAtmosphere *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAtmosphere_pythonExtension(t_PythonAtmosphere *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAtmosphere_getDensity0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getDensity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDensity", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAtmosphere_getDensity1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getDensity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getDensity", result);
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

          static jobject JNICALL t_PythonAtmosphere_getFrame2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::frames::Frame value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
            {
              throwTypeError("getFrame", result);
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

          static jobject JNICALL t_PythonAtmosphere_getVelocity3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getVelocity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getVelocity", result);
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

          static jobject JNICALL t_PythonAtmosphere_getVelocity4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getVelocity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getVelocity", result);
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

          static void JNICALL t_PythonAtmosphere_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAtmosphere_get__self(t_PythonAtmosphere *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldSGP4.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSGP4::class$ = NULL;
          jmethodID *FieldSGP4::mids$ = NULL;
          bool FieldSGP4::live$ = false;

          jclass FieldSGP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSGP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_dee9d0fe004a8f9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_5151ab0d47c2b93c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpInitialize_72479ee08453ef97] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_bee5c8ff86f4e777] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_dee9d0fe004a8f9d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_5151ab0d47c2b93c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        namespace tle {
          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args);
          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data);
          static PyGetSetDef t_FieldSGP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSGP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSGP4__methods_[] = {
            DECLARE_METHOD(t_FieldSGP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSGP4)[] = {
            { Py_tp_methods, t_FieldSGP4__methods_ },
            { Py_tp_init, (void *) t_FieldSGP4_init_ },
            { Py_tp_getset, t_FieldSGP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSGP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSGP4, t_FieldSGP4, FieldSGP4);
          PyObject *t_FieldSGP4::wrap_Object(const FieldSGP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSGP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSGP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSGP4), &PY_TYPE_DEF(FieldSGP4), module, "FieldSGP4", 0);
          }

          void t_FieldSGP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "class_", make_descriptor(FieldSGP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "wrapfn_", make_descriptor(t_FieldSGP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSGP4::initializeClass, 1)))
              return NULL;
            return t_FieldSGP4::wrap_Object(FieldSGP4(((t_FieldSGP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSGP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data)
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
#include "org/hipparchus/distribution/continuous/ParetoDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ParetoDistribution::class$ = NULL;
        jmethodID *ParetoDistribution::mids$ = NULL;
        bool ParetoDistribution::live$ = false;

        jclass ParetoDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ParetoDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_dff5885c2c873297] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParetoDistribution::ParetoDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble ParetoDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble ParetoDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble ParetoDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble ParetoDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble ParetoDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        jdouble ParetoDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_dff5885c2c873297]);
        }

        jdouble ParetoDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble ParetoDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jboolean ParetoDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble ParetoDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data);
        static PyGetSetDef t_ParetoDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ParetoDistribution, scale),
          DECLARE_GET_FIELD(t_ParetoDistribution, shape),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParetoDistribution__methods_[] = {
          DECLARE_METHOD(t_ParetoDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParetoDistribution)[] = {
          { Py_tp_methods, t_ParetoDistribution__methods_ },
          { Py_tp_init, (void *) t_ParetoDistribution_init_ },
          { Py_tp_getset, t_ParetoDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParetoDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ParetoDistribution, t_ParetoDistribution, ParetoDistribution);

        void t_ParetoDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ParetoDistribution), &PY_TYPE_DEF(ParetoDistribution), module, "ParetoDistribution", 0);
        }

        void t_ParetoDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "class_", make_descriptor(ParetoDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "wrapfn_", make_descriptor(t_ParetoDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParetoDistribution::initializeClass, 1)))
            return NULL;
          return t_ParetoDistribution::wrap_Object(ParetoDistribution(((t_ParetoDistribution *) arg)->object.this$));
        }
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParetoDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ParetoDistribution object((jobject) NULL);

              INT_CALL(object = ParetoDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ParetoDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ParetoDistribution(a0, a1, a2));
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

        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1064::class$ = NULL;
              jmethodID *Rtcm1064::mids$ = NULL;
              bool Rtcm1064::live$ = false;

              jclass Rtcm1064::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_1b582be2cf76d4b0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1064::Rtcm1064(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_1b582be2cf76d4b0, a0, a1.this$, a2.this$)) {}
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args);
              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data);
              static PyGetSetDef t_Rtcm1064__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1064, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1064__methods_[] = {
                DECLARE_METHOD(t_Rtcm1064, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1064)[] = {
                { Py_tp_methods, t_Rtcm1064__methods_ },
                { Py_tp_init, (void *) t_Rtcm1064_init_ },
                { Py_tp_getset, t_Rtcm1064__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1064)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1064, t_Rtcm1064, Rtcm1064);
              PyObject *t_Rtcm1064::wrap_Object(const Rtcm1064& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1064::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1064::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1064), &PY_TYPE_DEF(Rtcm1064), module, "Rtcm1064", 0);
              }

              void t_Rtcm1064::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "class_", make_descriptor(Rtcm1064::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "wrapfn_", make_descriptor(t_Rtcm1064::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1064::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1064::wrap_Object(Rtcm1064(((t_Rtcm1064 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1064::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1064 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1064(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data)
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
#include "org/orekit/utils/FrameAdapter.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FrameAdapter::class$ = NULL;
      jmethodID *FrameAdapter::mids$ = NULL;
      bool FrameAdapter::live$ = false;

      jclass FrameAdapter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FrameAdapter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAdapter::FrameAdapter(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_2cdae1c350dc3e9a], a0.this$, a1.this$));
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
      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args);

      static PyMethodDef t_FrameAdapter__methods_[] = {
        DECLARE_METHOD(t_FrameAdapter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAdapter)[] = {
        { Py_tp_methods, t_FrameAdapter__methods_ },
        { Py_tp_init, (void *) t_FrameAdapter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAdapter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAdapter, t_FrameAdapter, FrameAdapter);

      void t_FrameAdapter::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAdapter), &PY_TYPE_DEF(FrameAdapter), module, "FrameAdapter", 0);
      }

      void t_FrameAdapter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "class_", make_descriptor(FrameAdapter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "wrapfn_", make_descriptor(t_FrameAdapter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAdapter::initializeClass, 1)))
          return NULL;
        return t_FrameAdapter::wrap_Object(FrameAdapter(((t_FrameAdapter *) arg)->object.this$));
      }
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAdapter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FrameAdapter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FrameAdapter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *InterpolationGrid::class$ = NULL;
            jmethodID *InterpolationGrid::mids$ = NULL;
            bool InterpolationGrid::live$ = false;

            jclass InterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGridPoints_432c7f020b618085] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > InterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_432c7f020b618085], a0, a1));
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
            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args);

            static PyMethodDef t_InterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_InterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(InterpolationGrid)[] = {
              { Py_tp_methods, t_InterpolationGrid__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(InterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(InterpolationGrid, t_InterpolationGrid, InterpolationGrid);

            void t_InterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(InterpolationGrid), &PY_TYPE_DEF(InterpolationGrid), module, "InterpolationGrid", 0);
            }

            void t_InterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "class_", make_descriptor(InterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "wrapfn_", make_descriptor(t_InterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, InterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_InterpolationGrid::wrap_Object(InterpolationGrid(((t_InterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, InterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitDeterminationKey::class$ = NULL;
              jmethodID *OrbitDeterminationKey::mids$ = NULL;
              bool OrbitDeterminationKey::live$ = false;
              OrbitDeterminationKey *OrbitDeterminationKey::ACTUAL_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::COMMENT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_PARAMS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DATA_TYPES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_LAST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::GDOP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::MAXIMUM_OBS_GAP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_CONFIDENCE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGINT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_METHOD = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MIN_PRED_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_PREV_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::RECOMMENDED_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SEDR = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_STATES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::WEIGHTED_RMS = NULL;

              jclass OrbitDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_af88e34bdbb80401] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;)Z");
                  mids$[mid_valueOf_c728483d7f27e3f7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");
                  mids$[mid_values_3032bd8d88ce90de] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUAL_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "ACTUAL_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  COMMENT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_PARAMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_PARAMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DATA_TYPES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_FIRST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_FIRST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_LAST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_LAST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  GDOP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "GDOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  MAXIMUM_OBS_GAP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "MAXIMUM_OBS_GAP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_CONFIDENCE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGINT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGINT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MAX_PRED_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MAX_PRED_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_METHOD = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MIN_PRED_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MIN_PRED_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_PREV_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  RECOMMENDED_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "RECOMMENDED_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SEDR = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_STATES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_STATES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  WEIGHTED_RMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "WEIGHTED_RMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_af88e34bdbb80401], a0.this$, a1.this$, a2.this$);
              }

              OrbitDeterminationKey OrbitDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c728483d7f27e3f7], a0.this$));
              }

              JArray< OrbitDeterminationKey > OrbitDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_3032bd8d88ce90de]));
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data);
              static PyGetSetDef t_OrbitDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_OrbitDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitDeterminationKey)[] = {
                { Py_tp_methods, t_OrbitDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitDeterminationKey, t_OrbitDeterminationKey, OrbitDeterminationKey);
              PyObject *t_OrbitDeterminationKey::wrap_Object(const OrbitDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitDeterminationKey), &PY_TYPE_DEF(OrbitDeterminationKey), module, "OrbitDeterminationKey", 0);
              }

              void t_OrbitDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "class_", make_descriptor(OrbitDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "wrapfn_", make_descriptor(t_OrbitDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "ACTUAL_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::ACTUAL_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "COMMENT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_PARAMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_PARAMS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DATA_TYPES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DATA_TYPES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_FIRST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_LAST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_LAST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "GDOP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::GDOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "MAXIMUM_OBS_GAP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::MAXIMUM_OBS_GAP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_CONFIDENCE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGINT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGINT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MAX_PRED_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_METHOD", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MIN_PRED_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MIN_PRED_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_PREV_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "RECOMMENDED_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::RECOMMENDED_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SEDR", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SEDR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_STATES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "WEIGHTED_RMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::WEIGHTED_RMS)));
              }

              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitDeterminationKey::wrap_Object(OrbitDeterminationKey(((t_OrbitDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::valueOf(a0));
                  return t_OrbitDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type)
              {
                JArray< OrbitDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitDeterminationKey::wrap_jobject);
              }
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data)
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
#include "org/orekit/propagation/integration/PythonAdditionalDerivativesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_4fc0958a0539e1d3] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_680f8463a473c3cb] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdditionalDerivativesProvider::PythonAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAdditionalDerivativesProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
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
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmMessageType::class$ = NULL;
          jmethodID *RtcmMessageType::mids$ = NULL;
          bool RtcmMessageType::live$ = false;
          RtcmMessageType *RtcmMessageType::RTCM_1019 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1020 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1042 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1044 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1045 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1057 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1058 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1060 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1063 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1064 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1066 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1240 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1241 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1243 = NULL;

          jclass RtcmMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMessageType_88060bd9903e0c36] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_valueOf_88060bd9903e0c36] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_values_a33f89df78560247] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmMessageType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              RTCM_1019 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1019", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1020 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1020", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1042 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1042", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1044 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1044", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1045 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1045", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1057 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1057", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1058 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1058", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1060 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1060", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1063 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1063", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1064 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1064", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1066 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1066", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1240 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1240", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1241 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1241", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1243 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1243", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessageType RtcmMessageType::getMessageType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_88060bd9903e0c36], a0.this$));
          }

          RtcmMessageType RtcmMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_88060bd9903e0c36], a0.this$));
          }

          JArray< RtcmMessageType > RtcmMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_a33f89df78560247]));
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args);
          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmMessageType_values(PyTypeObject *type);
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data);
          static PyGetSetDef t_RtcmMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmMessageType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmMessageType__methods_[] = {
            DECLARE_METHOD(t_RtcmMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmMessageType, getMessageType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmMessageType)[] = {
            { Py_tp_methods, t_RtcmMessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmMessageType, t_RtcmMessageType, RtcmMessageType);
          PyObject *t_RtcmMessageType::wrap_Object(const RtcmMessageType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmMessageType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmMessageType), &PY_TYPE_DEF(RtcmMessageType), module, "RtcmMessageType", 0);
          }

          void t_RtcmMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "class_", make_descriptor(RtcmMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "wrapfn_", make_descriptor(t_RtcmMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmMessageType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1019", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1020", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1042", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1042)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1044", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1044)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1045", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1045)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1057", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1057)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1058", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1058)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1060", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1060)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1063", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1063)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1064", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1064)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1066", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1066)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1240", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1240)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1241", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1241)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1243", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1243)));
          }

          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmMessageType::initializeClass, 1)))
              return NULL;
            return t_RtcmMessageType::wrap_Object(RtcmMessageType(((t_RtcmMessageType *) arg)->object.this$));
          }
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::getMessageType(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMessageType", arg);
            return NULL;
          }

          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::valueOf(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmMessageType_values(PyTypeObject *type)
          {
            JArray< RtcmMessageType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmMessageType::wrap_jobject);
          }
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadataKey::class$ = NULL;
            jmethodID *TdmMetadataKey::mids$ = NULL;
            bool TdmMetadataKey::live$ = false;
            TdmMetadataKey *TdmMetadataKey::ANGLE_TYPE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTIONS_APPLIED = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_YEARLY = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_DOPPLER = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_MAG = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RANGE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RCS = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RECEIVE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_TRANSMIT = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_QUALITY = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_TYPES = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_BIAS = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_ROLLOVER = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_SCALE = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::FREQ_OFFSET = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_INTERVAL = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION_DEGREE = NULL;
            TdmMetadataKey *TdmMetadataKey::MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODULUS = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_UNITS = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::REFERENCE_FRAME = NULL;
            TdmMetadataKey *TdmMetadataKey::START_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::STOP_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::TIMETAG_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::TRACK_ID = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_DENOMINATOR = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_NUMERATOR = NULL;

            jclass TdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_273f83589c9bbbc4] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;)Z");
                mids$[mid_valueOf_cefba71f348854ed] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");
                mids$[mid_values_63f1013509b55d22] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_TYPE = new TdmMetadataKey(env->getStaticObjectField(cls, "ANGLE_TYPE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTIONS_APPLIED = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTIONS_APPLIED", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_DIURNAL = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_DIURNAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_YEARLY = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_YEARLY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_DOPPLER = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_DOPPLER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_MAG = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_MAG", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RANGE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RCS = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RCS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RECEIVE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_TRANSMIT = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_QUALITY = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_QUALITY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_TYPES = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_BIAS = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_ROLLOVER = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_ROLLOVER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_SCALE = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_SCALE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                FREQ_OFFSET = new TdmMetadataKey(env->getStaticObjectField(cls, "FREQ_OFFSET", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_INTERVAL = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_INTERVAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION_DEGREE = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODULUS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODULUS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_UNITS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_UNITS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                REFERENCE_FRAME = new TdmMetadataKey(env->getStaticObjectField(cls, "REFERENCE_FRAME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                START_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                STOP_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TIMETAG_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "TIMETAG_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRACK_ID = new TdmMetadataKey(env->getStaticObjectField(cls, "TRACK_ID", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_DENOMINATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_DENOMINATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_NUMERATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_NUMERATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_273f83589c9bbbc4], a0.this$, a1.this$, a2.this$);
            }

            TdmMetadataKey TdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cefba71f348854ed], a0.this$));
            }

            JArray< TdmMetadataKey > TdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_63f1013509b55d22]));
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
          namespace tdm {
            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data);
            static PyGetSetDef t_TdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_TdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadataKey)[] = {
              { Py_tp_methods, t_TdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmMetadataKey, t_TdmMetadataKey, TdmMetadataKey);
            PyObject *t_TdmMetadataKey::wrap_Object(const TdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadataKey), &PY_TYPE_DEF(TdmMetadataKey), module, "TdmMetadataKey", 0);
            }

            void t_TdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "class_", make_descriptor(TdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "wrapfn_", make_descriptor(t_TdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "ANGLE_TYPE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::ANGLE_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTIONS_APPLIED", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTIONS_APPLIED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_DIURNAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_YEARLY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_YEARLY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_DOPPLER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_DOPPLER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_MAG", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RANGE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RCS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RECEIVE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_TRANSMIT", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_TRANSMIT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_QUALITY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_QUALITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_TYPES", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_TYPES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_BIAS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_ROLLOVER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_ROLLOVER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_SCALE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_SCALE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "FREQ_OFFSET", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::FREQ_OFFSET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_INTERVAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_INTERVAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION_DEGREE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODULUS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODULUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_UNITS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_UNITS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "REFERENCE_FRAME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::REFERENCE_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "START_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::START_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "STOP_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::STOP_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TIMETAG_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TIMETAG_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRACK_ID", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRACK_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_DENOMINATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_DENOMINATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_NUMERATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_NUMERATOR)));
            }

            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_TdmMetadataKey::wrap_Object(TdmMetadataKey(((t_TdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::valueOf(a0));
                return t_TdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< TdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/FDOABuilder.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *FDOABuilder::class$ = NULL;
          jmethodID *FDOABuilder::mids$ = NULL;
          bool FDOABuilder::live$ = false;

          jclass FDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/FDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b3b39c3301ee152f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_4da7dc73c716f762] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/FDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FDOABuilder::FDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_b3b39c3301ee152f, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

          ::org::orekit::estimation::measurements::FDOA FDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::FDOA(env->callObjectMethod(this$, mids$[mid_build_4da7dc73c716f762], a0.this$, a1.this$));
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
          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args);
          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args);
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data);
          static PyGetSetDef t_FDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_FDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FDOABuilder__methods_[] = {
            DECLARE_METHOD(t_FDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_FDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FDOABuilder)[] = {
            { Py_tp_methods, t_FDOABuilder__methods_ },
            { Py_tp_init, (void *) t_FDOABuilder_init_ },
            { Py_tp_getset, t_FDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(FDOABuilder, t_FDOABuilder, FDOABuilder);
          PyObject *t_FDOABuilder::wrap_Object(const FDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(FDOABuilder), &PY_TYPE_DEF(FDOABuilder), module, "FDOABuilder", 0);
          }

          void t_FDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "class_", make_descriptor(FDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "wrapfn_", make_descriptor(t_FDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FDOABuilder::initializeClass, 1)))
              return NULL;
            return t_FDOABuilder::wrap_Object(FDOABuilder(((t_FDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            FDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = FDOABuilder(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(FDOA);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::FDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_FDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data)
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
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizerId::class$ = NULL;
        jmethodID *OptimizerId::mids$ = NULL;
        bool OptimizerId::live$ = false;
        OptimizerId *OptimizerId::GAUSS_NEWTON_LU = NULL;
        OptimizerId *OptimizerId::GAUSS_NEWTON_QR = NULL;
        OptimizerId *OptimizerId::LEVENBERG_MARQUADT = NULL;

        jclass OptimizerId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizerId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_0a38d85ef48494bf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/adjustment/OptimizerId;");
            mids$[mid_values_204a88ef5fe6ef9d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/adjustment/OptimizerId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GAUSS_NEWTON_LU = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_LU", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            GAUSS_NEWTON_QR = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_QR", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            LEVENBERG_MARQUADT = new OptimizerId(env->getStaticObjectField(cls, "LEVENBERG_MARQUADT", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OptimizerId OptimizerId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return OptimizerId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0a38d85ef48494bf], a0.this$));
        }

        JArray< OptimizerId > OptimizerId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< OptimizerId >(env->callStaticObjectMethod(cls, mids$[mid_values_204a88ef5fe6ef9d]));
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
      namespace adjustment {
        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args);
        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_OptimizerId_values(PyTypeObject *type);
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data);
        static PyGetSetDef t_OptimizerId__fields_[] = {
          DECLARE_GET_FIELD(t_OptimizerId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OptimizerId__methods_[] = {
          DECLARE_METHOD(t_OptimizerId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, of_, METH_VARARGS),
          DECLARE_METHOD(t_OptimizerId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizerId)[] = {
          { Py_tp_methods, t_OptimizerId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OptimizerId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizerId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(OptimizerId, t_OptimizerId, OptimizerId);
        PyObject *t_OptimizerId::wrap_Object(const OptimizerId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_OptimizerId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_OptimizerId::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizerId), &PY_TYPE_DEF(OptimizerId), module, "OptimizerId", 0);
        }

        void t_OptimizerId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "class_", make_descriptor(OptimizerId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "wrapfn_", make_descriptor(t_OptimizerId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "boxfn_", make_descriptor(boxObject));
          env->getClass(OptimizerId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_LU", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_LU)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_QR", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_QR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "LEVENBERG_MARQUADT", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::LEVENBERG_MARQUADT)));
        }

        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizerId::initializeClass, 1)))
            return NULL;
          return t_OptimizerId::wrap_Object(OptimizerId(((t_OptimizerId *) arg)->object.this$));
        }
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizerId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          OptimizerId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::valueOf(a0));
            return t_OptimizerId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_OptimizerId_values(PyTypeObject *type)
        {
          JArray< OptimizerId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::values());
          return JArray<jobject>(result.this$).wrap(t_OptimizerId::wrap_jobject);
        }
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldBoundedPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldBoundedPropagator::class$ = NULL;
      jmethodID *PythonFieldBoundedPropagator::mids$ = NULL;
      bool PythonFieldBoundedPropagator::live$ = false;

      jclass PythonFieldBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_2c8cec257f03501f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_f929ebd2a84dbfe7] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_54ac43f1e933cf20] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_02cea343d9f71933] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMultiplexer_805c1ec2ab9b09dd] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_f6f1ea8aef3019eb] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_fc770c29e3468de8] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldBoundedPropagator::PythonFieldBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldBoundedPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonFieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldBoundedPropagator_of_(t_PythonFieldBoundedPropagator *self, PyObject *args);
      static int t_PythonFieldBoundedPropagator_init_(t_PythonFieldBoundedPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldBoundedPropagator_finalize(t_PythonFieldBoundedPropagator *self);
      static PyObject *t_PythonFieldBoundedPropagator_pythonExtension(t_PythonFieldBoundedPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonFieldBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldBoundedPropagator_get__self(t_PythonFieldBoundedPropagator *self, void *data);
      static PyObject *t_PythonFieldBoundedPropagator_get__parameters_(t_PythonFieldBoundedPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldBoundedPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldBoundedPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldBoundedPropagator)[] = {
        { Py_tp_methods, t_PythonFieldBoundedPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldBoundedPropagator_init_ },
        { Py_tp_getset, t_PythonFieldBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldBoundedPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldBoundedPropagator, t_PythonFieldBoundedPropagator, PythonFieldBoundedPropagator);
      PyObject *t_PythonFieldBoundedPropagator::wrap_Object(const PythonFieldBoundedPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldBoundedPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldBoundedPropagator *self = (t_PythonFieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldBoundedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldBoundedPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldBoundedPropagator *self = (t_PythonFieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldBoundedPropagator), &PY_TYPE_DEF(PythonFieldBoundedPropagator), module, "PythonFieldBoundedPropagator", 1);
      }

      void t_PythonFieldBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "class_", make_descriptor(PythonFieldBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "wrapfn_", make_descriptor(t_PythonFieldBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldBoundedPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V", (void *) t_PythonFieldBoundedPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldBoundedPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldBoundedPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonFieldBoundedPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonFieldBoundedPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldBoundedPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldBoundedPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFieldBoundedPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonFieldBoundedPropagator_getManagedAdditionalStates9 },
          { "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldBoundedPropagator_getMaxDate10 },
          { "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldBoundedPropagator_getMinDate11 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;", (void *) t_PythonFieldBoundedPropagator_getMultiplexer12 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldBoundedPropagator_getPVCoordinates13 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonFieldBoundedPropagator_isAdditionalStateManaged14 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_propagate15 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_propagate16 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldBoundedPropagator_pythonDecRef17 },
          { "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldBoundedPropagator_resetInitialState18 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonFieldBoundedPropagator_setAttitudeProvider19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonFieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldBoundedPropagator::wrap_Object(PythonFieldBoundedPropagator(((t_PythonFieldBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldBoundedPropagator_of_(t_PythonFieldBoundedPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldBoundedPropagator_init_(t_PythonFieldBoundedPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldBoundedPropagator object((jobject) NULL);

        INT_CALL(object = PythonFieldBoundedPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldBoundedPropagator_finalize(t_PythonFieldBoundedPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldBoundedPropagator_pythonExtension(t_PythonFieldBoundedPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldAdditionalStateProvider::wrap_Object(::org::orekit::propagation::FieldAdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMaxDate", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMinDate", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jboolean JNICALL t_PythonFieldBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonFieldBoundedPropagator_get__self(t_PythonFieldBoundedPropagator *self, void *data)
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
      static PyObject *t_PythonFieldBoundedPropagator_get__parameters_(t_PythonFieldBoundedPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
