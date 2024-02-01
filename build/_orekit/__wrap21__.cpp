#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/OutlineExtractor.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *OutlineExtractor::class$ = NULL;
          jmethodID *OutlineExtractor::mids$ = NULL;
          bool OutlineExtractor::live$ = false;

          jclass OutlineExtractor::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/OutlineExtractor");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c8e9682f0daaca68] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getOutline_7f23f1989913768f] = env->getMethodID(cls, "getOutline", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;)[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlineExtractor::OutlineExtractor(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8e9682f0daaca68, a0.this$, a1.this$)) {}

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > OutlineExtractor::getOutline(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet & a0) const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getOutline_7f23f1989913768f], a0.this$));
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
          static PyObject *t_OutlineExtractor_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlineExtractor_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OutlineExtractor_init_(t_OutlineExtractor *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OutlineExtractor_getOutline(t_OutlineExtractor *self, PyObject *arg);

          static PyMethodDef t_OutlineExtractor__methods_[] = {
            DECLARE_METHOD(t_OutlineExtractor, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlineExtractor, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlineExtractor, getOutline, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OutlineExtractor)[] = {
            { Py_tp_methods, t_OutlineExtractor__methods_ },
            { Py_tp_init, (void *) t_OutlineExtractor_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OutlineExtractor)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OutlineExtractor, t_OutlineExtractor, OutlineExtractor);

          void t_OutlineExtractor::install(PyObject *module)
          {
            installType(&PY_TYPE(OutlineExtractor), &PY_TYPE_DEF(OutlineExtractor), module, "OutlineExtractor", 0);
          }

          void t_OutlineExtractor::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "class_", make_descriptor(OutlineExtractor::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "wrapfn_", make_descriptor(t_OutlineExtractor::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OutlineExtractor_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OutlineExtractor::initializeClass, 1)))
              return NULL;
            return t_OutlineExtractor::wrap_Object(OutlineExtractor(((t_OutlineExtractor *) arg)->object.this$));
          }
          static PyObject *t_OutlineExtractor_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OutlineExtractor::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OutlineExtractor_init_(t_OutlineExtractor *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OutlineExtractor object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OutlineExtractor(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OutlineExtractor_getOutline(t_OutlineExtractor *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet::parameters_))
            {
              OBJ_CALL(result = self->object.getOutline(a0));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError((PyObject *) self, "getOutline", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeTroposphericDelayModifier::mids$ = NULL;
          bool RangeTroposphericDelayModifier::live$ = false;

          jclass RangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1f42633debde232b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeTroposphericDelayModifier::RangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_1f42633debde232b, a0.this$)) {}

          void RangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void RangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeTroposphericDelayModifier, t_RangeTroposphericDelayModifier, RangeTroposphericDelayModifier);

          void t_RangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeTroposphericDelayModifier), &PY_TYPE_DEF(RangeTroposphericDelayModifier), module, "RangeTroposphericDelayModifier", 0);
          }

          void t_RangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "class_", make_descriptor(RangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeTroposphericDelayModifier::wrap_Object(RangeTroposphericDelayModifier(((t_RangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            RangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = RangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonAtmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDensity_0c5821935d445848] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_65e73ef68b3713d0] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_9e32d405e56d9d4c] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getVelocity_9eb9e27560bce34b] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAtmosphere::PythonAtmosphere() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonAtmosphere::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAtmosphere::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAtmosphere::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/hipparchus/ode/MultistepFieldIntegrator.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *MultistepFieldIntegrator::class$ = NULL;
      jmethodID *MultistepFieldIntegrator::mids$ = NULL;
      bool MultistepFieldIntegrator::live$ = false;

      jclass MultistepFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/MultistepFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxGrowth_9981f74b2d109da6] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_9981f74b2d109da6] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_d6ab429752e7c267] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_9981f74b2d109da6] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_a0df2acc30cad91d] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");
          mids$[mid_setMaxGrowth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_efdcac7cc8f1c735] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/FieldODEIntegrator;)V");
          mids$[mid_initializeHighOrderDerivatives_59a89abbfffc5f1c] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_computeStepGrowShrinkFactor_bf28ed64d6e8576b] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_rescale_f63ca9e3185c722e] = env->getMethodID(cls, "rescale", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_start_81baa6658b72de17] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepFieldIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_9981f74b2d109da6]);
      }

      jdouble MultistepFieldIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_9981f74b2d109da6]);
      }

      jint MultistepFieldIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_d6ab429752e7c267]);
      }

      jdouble MultistepFieldIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_9981f74b2d109da6]);
      }

      ::org::hipparchus::ode::FieldODEIntegrator MultistepFieldIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::FieldODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_a0df2acc30cad91d]));
      }

      void MultistepFieldIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_1ad26e8c8c0cd65b], a0);
      }

      void MultistepFieldIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_1ad26e8c8c0cd65b], a0);
      }

      void MultistepFieldIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_1ad26e8c8c0cd65b], a0);
      }

      void MultistepFieldIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::FieldODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_efdcac7cc8f1c735], a0.this$);
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
      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args);
      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data);
      static PyGetSetDef t_MultistepFieldIntegrator__fields_[] = {
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, maxGrowth),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, minReduction),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, nSteps),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, safety),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, starterIntegrator),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultistepFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_MultistepFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMaxGrowth, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMinReduction, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getNSteps, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getSafety, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getStarterIntegrator, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMaxGrowth, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMinReduction, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setSafety, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setStarterIntegrator, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultistepFieldIntegrator)[] = {
        { Py_tp_methods, t_MultistepFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultistepFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultistepFieldIntegrator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
        NULL
      };

      DEFINE_TYPE(MultistepFieldIntegrator, t_MultistepFieldIntegrator, MultistepFieldIntegrator);
      PyObject *t_MultistepFieldIntegrator::wrap_Object(const MultistepFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MultistepFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MultistepFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultistepFieldIntegrator), &PY_TYPE_DEF(MultistepFieldIntegrator), module, "MultistepFieldIntegrator", 0);
      }

      void t_MultistepFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "class_", make_descriptor(MultistepFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "wrapfn_", make_descriptor(t_MultistepFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultistepFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_MultistepFieldIntegrator::wrap_Object(MultistepFieldIntegrator(((t_MultistepFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultistepFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinReduction());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNSteps());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSafety());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEIntegrator result((jobject) NULL);
        OBJ_CALL(result = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxGrowth(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinReduction(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setSafety(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEIntegrator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
        {
          OBJ_CALL(self->object.setStarterIntegrator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setStarterIntegrator", arg);
        return NULL;
      }
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxGrowth(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinReduction());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinReduction(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNSteps());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSafety());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setSafety(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "safety", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
        OBJ_CALL(value = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(value);
      }
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &value))
          {
            INT_CALL(self->object.setStarterIntegrator(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "starterIntegrator", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder.h"
#include "java/util/List.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *InterSensorsOptimizationProblemBuilder::class$ = NULL;
        jmethodID *InterSensorsOptimizationProblemBuilder::mids$ = NULL;
        bool InterSensorsOptimizationProblemBuilder::live$ = false;

        jclass InterSensorsOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f1db8e017d379650] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Ljava/util/Collection;)V");
            mids$[mid_build_fabe1e3047de884e] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_createTargetAndWeight_ff7cb6c242604316] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_initMapping_ff7cb6c242604316] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createFunction_b9638c47db64ddc7] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSensorsOptimizationProblemBuilder::InterSensorsOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::java::util::Collection & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_f1db8e017d379650, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem InterSensorsOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_fabe1e3047de884e], a0, a1));
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
        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_InterSensorsOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSensorsOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_InterSensorsOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_InterSensorsOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSensorsOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(InterSensorsOptimizationProblemBuilder, t_InterSensorsOptimizationProblemBuilder, InterSensorsOptimizationProblemBuilder);

        void t_InterSensorsOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSensorsOptimizationProblemBuilder), &PY_TYPE_DEF(InterSensorsOptimizationProblemBuilder), module, "InterSensorsOptimizationProblemBuilder", 0);
        }

        void t_InterSensorsOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "class_", make_descriptor(InterSensorsOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_InterSensorsOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_InterSensorsOptimizationProblemBuilder::wrap_Object(InterSensorsOptimizationProblemBuilder(((t_InterSensorsOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::java::util::Collection a2((jobject) NULL);
          PyTypeObject **p2;
          InterSensorsOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "KkK", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = InterSensorsOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterSensorsOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/StreamMonitor.h"
#include "java/lang/Runnable.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *StreamMonitor::class$ = NULL;
          jmethodID *StreamMonitor::mids$ = NULL;
          bool StreamMonitor::live$ = false;

          jclass StreamMonitor::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/StreamMonitor");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_42c2a5427b044a4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/ntrip/NtripClient;Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZDDI)V");
              mids$[mid_addObserver_c774afe311205326] = env->getMethodID(cls, "addObserver", "(ILorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_getException_96b50f1517830654] = env->getMethodID(cls, "getException", "()Lorg/orekit/errors/OrekitException;");
              mids$[mid_run_ff7cb6c242604316] = env->getMethodID(cls, "run", "()V");
              mids$[mid_stopMonitoring_ff7cb6c242604316] = env->getMethodID(cls, "stopMonitoring", "()V");
              mids$[mid_fetchByte_d6ab429752e7c267] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StreamMonitor::StreamMonitor(const ::org::orekit::gnss::metric::ntrip::NtripClient & a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::Type & a2, jboolean a3, jboolean a4, jdouble a5, jdouble a6, jint a7) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_42c2a5427b044a4d, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

          void StreamMonitor::addObserver(jint a0, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_c774afe311205326], a0, a1.this$);
          }

          ::org::orekit::errors::OrekitException StreamMonitor::getException() const
          {
            return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_getException_96b50f1517830654]));
          }

          void StreamMonitor::run() const
          {
            env->callVoidMethod(this$, mids$[mid_run_ff7cb6c242604316]);
          }

          void StreamMonitor::stopMonitoring() const
          {
            env->callVoidMethod(this$, mids$[mid_stopMonitoring_ff7cb6c242604316]);
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
        namespace ntrip {
          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args);
          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data);
          static PyGetSetDef t_StreamMonitor__fields_[] = {
            DECLARE_GET_FIELD(t_StreamMonitor, exception),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StreamMonitor__methods_[] = {
            DECLARE_METHOD(t_StreamMonitor, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_StreamMonitor, getException, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, run, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, stopMonitoring, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StreamMonitor)[] = {
            { Py_tp_methods, t_StreamMonitor__methods_ },
            { Py_tp_init, (void *) t_StreamMonitor_init_ },
            { Py_tp_getset, t_StreamMonitor__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StreamMonitor)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(StreamMonitor, t_StreamMonitor, StreamMonitor);

          void t_StreamMonitor::install(PyObject *module)
          {
            installType(&PY_TYPE(StreamMonitor), &PY_TYPE_DEF(StreamMonitor), module, "StreamMonitor", 0);
          }

          void t_StreamMonitor::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "class_", make_descriptor(StreamMonitor::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "wrapfn_", make_descriptor(t_StreamMonitor::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StreamMonitor::initializeClass, 1)))
              return NULL;
            return t_StreamMonitor::wrap_Object(StreamMonitor(((t_StreamMonitor *) arg)->object.this$));
          }
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StreamMonitor::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::ntrip::NtripClient a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            jboolean a4;
            jdouble a5;
            jdouble a6;
            jint a7;
            StreamMonitor object((jobject) NULL);

            if (!parseArgs(args, "ksKZZDDI", ::org::orekit::gnss::metric::ntrip::NtripClient::initializeClass, ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = StreamMonitor(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::metric::ntrip::MessageObserver a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addObserver(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self)
          {
            ::org::orekit::errors::OrekitException result((jobject) NULL);
            OBJ_CALL(result = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(result);
          }

          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.run());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.stopMonitoring());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data)
          {
            ::org::orekit::errors::OrekitException value((jobject) NULL);
            OBJ_CALL(value = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGHIJjsPolynomials::class$ = NULL;
            jmethodID *FieldGHIJjsPolynomials::mids$ = NULL;
            bool FieldGHIJjsPolynomials::live$ = false;

            jclass FieldGHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d9053bad9d08a9e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGjs_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getGjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHjs_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getHjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getIjs_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getIjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getJjs_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getJjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdAlpha_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdGjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdBeta_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdGjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdh_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdGjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdk_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdGjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdAlpha_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdHjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdBeta_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdHjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdh_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdHjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdk_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdHjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdAlpha_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdIjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdBeta_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdIjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdh_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdIjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdk_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdIjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdAlpha_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdJjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdBeta_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdJjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdh_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdJjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdk_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdJjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHIJjsPolynomials::FieldGHIJjsPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9053bad9d08a9e6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGjs_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHjs_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIjs_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getJjs_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdAlpha_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdBeta_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdh_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdk_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdAlpha_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdBeta_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdh_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdk_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdAlpha_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdBeta_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdh_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdk_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdAlpha_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdBeta_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdh_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdk_89a7d1b6c5e4fe60], a0, a1));
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
            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data);
            static PyGetSetDef t_FieldGHIJjsPolynomials__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGHIJjsPolynomials, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGHIJjsPolynomials)[] = {
              { Py_tp_methods, t_FieldGHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_FieldGHIJjsPolynomials_init_ },
              { Py_tp_getset, t_FieldGHIJjsPolynomials__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGHIJjsPolynomials, t_FieldGHIJjsPolynomials, FieldGHIJjsPolynomials);
            PyObject *t_FieldGHIJjsPolynomials::wrap_Object(const FieldGHIJjsPolynomials& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGHIJjsPolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGHIJjsPolynomials), &PY_TYPE_DEF(FieldGHIJjsPolynomials), module, "FieldGHIJjsPolynomials", 0);
            }

            void t_FieldGHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "class_", make_descriptor(FieldGHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "wrapfn_", make_descriptor(t_FieldGHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_FieldGHIJjsPolynomials::wrap_Object(FieldGHIJjsPolynomials(((t_FieldGHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
              return NULL;
            }
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data)
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
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeries$CompiledSeries::class$ = NULL;
      jmethodID *PoissonSeries$CompiledSeries::mids$ = NULL;
      bool PoissonSeries$CompiledSeries::live$ = false;

      jclass PoissonSeries$CompiledSeries::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeries$CompiledSeries");

          mids$ = new jmethodID[max_mid];
          mids$[mid_derivative_6bcdaa5aa99188a7] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_2ebca4e2d8d7517f] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_6bcdaa5aa99188a7] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_2ebca4e2d8d7517f] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_6bcdaa5aa99188a7], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_2ebca4e2d8d7517f], a0.this$));
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_6bcdaa5aa99188a7], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_2ebca4e2d8d7517f], a0.this$));
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
      static PyObject *t_PoissonSeries$CompiledSeries_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries$CompiledSeries_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries$CompiledSeries_derivative(t_PoissonSeries$CompiledSeries *self, PyObject *args);
      static PyObject *t_PoissonSeries$CompiledSeries_value(t_PoissonSeries$CompiledSeries *self, PyObject *args);

      static PyMethodDef t_PoissonSeries$CompiledSeries__methods_[] = {
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, derivative, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeries$CompiledSeries)[] = {
        { Py_tp_methods, t_PoissonSeries$CompiledSeries__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeries$CompiledSeries)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeries$CompiledSeries, t_PoissonSeries$CompiledSeries, PoissonSeries$CompiledSeries);

      void t_PoissonSeries$CompiledSeries::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeries$CompiledSeries), &PY_TYPE_DEF(PoissonSeries$CompiledSeries), module, "PoissonSeries$CompiledSeries", 0);
      }

      void t_PoissonSeries$CompiledSeries::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "class_", make_descriptor(PoissonSeries$CompiledSeries::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "wrapfn_", make_descriptor(t_PoissonSeries$CompiledSeries::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeries$CompiledSeries_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeries$CompiledSeries::initializeClass, 1)))
          return NULL;
        return t_PoissonSeries$CompiledSeries::wrap_Object(PoissonSeries$CompiledSeries(((t_PoissonSeries$CompiledSeries *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeries$CompiledSeries_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeries$CompiledSeries::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PoissonSeries$CompiledSeries_derivative(t_PoissonSeries$CompiledSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_PoissonSeries$CompiledSeries_value(t_PoissonSeries$CompiledSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$DetectorConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$DetectorConfiguration::mids$ = NULL;
        bool CRDConfiguration$DetectorConfiguration::live$ = false;

        jclass CRDConfiguration$DetectorConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAmplifierBandwidth_9981f74b2d109da6] = env->getMethodID(cls, "getAmplifierBandwidth", "()D");
            mids$[mid_getAmplifierGain_9981f74b2d109da6] = env->getMethodID(cls, "getAmplifierGain", "()D");
            mids$[mid_getAmplifierInUse_d2c8eb4129821f0e] = env->getMethodID(cls, "getAmplifierInUse", "()Ljava/lang/String;");
            mids$[mid_getApplicableWavelength_9981f74b2d109da6] = env->getMethodID(cls, "getApplicableWavelength", "()D");
            mids$[mid_getAppliedVoltage_9981f74b2d109da6] = env->getMethodID(cls, "getAppliedVoltage", "()D");
            mids$[mid_getDarkCount_9981f74b2d109da6] = env->getMethodID(cls, "getDarkCount", "()D");
            mids$[mid_getDetectorId_d2c8eb4129821f0e] = env->getMethodID(cls, "getDetectorId", "()Ljava/lang/String;");
            mids$[mid_getDetectorType_d2c8eb4129821f0e] = env->getMethodID(cls, "getDetectorType", "()Ljava/lang/String;");
            mids$[mid_getExternalSignalProcessing_d2c8eb4129821f0e] = env->getMethodID(cls, "getExternalSignalProcessing", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseType_d2c8eb4129821f0e] = env->getMethodID(cls, "getOutputPulseType", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseWidth_9981f74b2d109da6] = env->getMethodID(cls, "getOutputPulseWidth", "()D");
            mids$[mid_getQuantumEfficiency_9981f74b2d109da6] = env->getMethodID(cls, "getQuantumEfficiency", "()D");
            mids$[mid_getSpatialFilter_9981f74b2d109da6] = env->getMethodID(cls, "getSpatialFilter", "()D");
            mids$[mid_getSpectralFilter_9981f74b2d109da6] = env->getMethodID(cls, "getSpectralFilter", "()D");
            mids$[mid_getTransmissionOfSpectralFilter_9981f74b2d109da6] = env->getMethodID(cls, "getTransmissionOfSpectralFilter", "()D");
            mids$[mid_setAmplifierBandwidth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAmplifierBandwidth", "(D)V");
            mids$[mid_setAmplifierGain_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAmplifierGain", "(D)V");
            mids$[mid_setAmplifierInUse_105e1eadb709d9ac] = env->getMethodID(cls, "setAmplifierInUse", "(Ljava/lang/String;)V");
            mids$[mid_setApplicableWavelength_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setApplicableWavelength", "(D)V");
            mids$[mid_setAppliedVoltage_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAppliedVoltage", "(D)V");
            mids$[mid_setDarkCount_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDarkCount", "(D)V");
            mids$[mid_setDetectorId_105e1eadb709d9ac] = env->getMethodID(cls, "setDetectorId", "(Ljava/lang/String;)V");
            mids$[mid_setDetectorType_105e1eadb709d9ac] = env->getMethodID(cls, "setDetectorType", "(Ljava/lang/String;)V");
            mids$[mid_setExternalSignalProcessing_105e1eadb709d9ac] = env->getMethodID(cls, "setExternalSignalProcessing", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseType_105e1eadb709d9ac] = env->getMethodID(cls, "setOutputPulseType", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseWidth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOutputPulseWidth", "(D)V");
            mids$[mid_setQuantumEfficiency_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setQuantumEfficiency", "(D)V");
            mids$[mid_setSpatialFilter_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSpatialFilter", "(D)V");
            mids$[mid_setSpectralFilter_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSpectralFilter", "(D)V");
            mids$[mid_setTransmissionOfSpectralFilter_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTransmissionOfSpectralFilter", "(D)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$DetectorConfiguration::CRDConfiguration$DetectorConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierBandwidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierBandwidth_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierGain() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierGain_9981f74b2d109da6]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getAmplifierInUse() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAmplifierInUse_d2c8eb4129821f0e]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getApplicableWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getApplicableWavelength_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAppliedVoltage() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAppliedVoltage_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getDarkCount() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDarkCount_9981f74b2d109da6]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorId_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorType_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getExternalSignalProcessing() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalSignalProcessing_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getOutputPulseType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputPulseType_d2c8eb4129821f0e]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getOutputPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOutputPulseWidth_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getQuantumEfficiency() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuantumEfficiency_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpatialFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpatialFilter_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpectralFilter_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getTransmissionOfSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTransmissionOfSpectralFilter_9981f74b2d109da6]);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierBandwidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierBandwidth_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierGain(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierGain_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierInUse(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierInUse_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setApplicableWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setApplicableWavelength_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAppliedVoltage(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAppliedVoltage_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDarkCount(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDarkCount_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorId_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorType_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setExternalSignalProcessing(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setExternalSignalProcessing_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseType_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseWidth_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setQuantumEfficiency(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQuantumEfficiency_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpatialFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpatialFilter_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpectralFilter_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setTransmissionOfSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransmissionOfSpectralFilter_1ad26e8c8c0cd65b], a0);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      namespace ilrs {
        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$DetectorConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierBandwidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierGain),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierInUse),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, applicableWavelength),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, appliedVoltage),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, darkCount),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, externalSignalProcessing),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseWidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, quantumEfficiency),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spatialFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spectralFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, transmissionOfSpectralFilter),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$DetectorConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierBandwidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierGain, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierInUse, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getApplicableWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAppliedVoltage, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDarkCount, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getExternalSignalProcessing, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseWidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getQuantumEfficiency, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpatialFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getTransmissionOfSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierBandwidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierGain, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierInUse, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setApplicableWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAppliedVoltage, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDarkCount, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setExternalSignalProcessing, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseWidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setQuantumEfficiency, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpatialFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setTransmissionOfSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$DetectorConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$DetectorConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$DetectorConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$DetectorConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$DetectorConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$DetectorConfiguration, t_CRDConfiguration$DetectorConfiguration, CRDConfiguration$DetectorConfiguration);

        void t_CRDConfiguration$DetectorConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$DetectorConfiguration), &PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration), module, "CRDConfiguration$DetectorConfiguration", 0);
        }

        void t_CRDConfiguration$DetectorConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "class_", make_descriptor(CRDConfiguration$DetectorConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$DetectorConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$DetectorConfiguration::wrap_Object(CRDConfiguration$DetectorConfiguration(((t_CRDConfiguration$DetectorConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$DetectorConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$DetectorConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAmplifierInUse());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDarkCount());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getExternalSignalProcessing());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOutputPulseType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierBandwidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierBandwidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierGain(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierGain", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAmplifierInUse(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierInUse", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setApplicableWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setApplicableWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAppliedVoltage(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAppliedVoltage", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDarkCount(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDarkCount", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setExternalSignalProcessing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setExternalSignalProcessing", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseWidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseWidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setQuantumEfficiency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setQuantumEfficiency", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpatialFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpatialFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTransmissionOfSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTransmissionOfSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierBandwidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierBandwidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierGain(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierGain", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAmplifierInUse());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAmplifierInUse(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierInUse", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setApplicableWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "applicableWavelength", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAppliedVoltage(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "appliedVoltage", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDarkCount());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDarkCount(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "darkCount", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorId());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getExternalSignalProcessing());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setExternalSignalProcessing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "externalSignalProcessing", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOutputPulseType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOutputPulseType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setOutputPulseWidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseWidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setQuantumEfficiency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "quantumEfficiency", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpatialFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spatialFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spectralFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTransmissionOfSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transmissionOfSpectralFilter", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frame::class$ = NULL;
      jmethodID *Frame::mids$ = NULL;
      bool Frame::live$ = false;

      jclass Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2c9eb35eb4351d75] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_338c12e15b03388d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;)V");
          mids$[mid_init$_4f060f3eeb795497] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_init$_5b56090a469fd494] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;Z)V");
          mids$[mid_getAncestor_d41f06476b4facac] = env->getMethodID(cls, "getAncestor", "(I)Lorg/orekit/frames/Frame;");
          mids$[mid_getDepth_d6ab429752e7c267] = env->getMethodID(cls, "getDepth", "()I");
          mids$[mid_getFrozenFrame_80f13c4cdaa2d426] = env->getMethodID(cls, "getFrozenFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getParent_cb151471db4570f0] = env->getMethodID(cls, "getParent", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRoot_cb151471db4570f0] = env->getStaticMethodID(cls, "getRoot", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getStaticTransformTo_60e345a418d4662f] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransformTo_e73be67fef493a57] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransformProvider_fd7cd467d992431a] = env->getMethodID(cls, "getTransformProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getTransformTo_ccc97eb30f689f7c] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransformTo_a8bd256671a35bf7] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_isChildOf_295aca1f11b596c0] = env->getMethodID(cls, "isChildOf", "(Lorg/orekit/frames/Frame;)Z");
          mids$[mid_isPseudoInertial_eee3de00fe971136] = env->getMethodID(cls, "isPseudoInertial", "()Z");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c9eb35eb4351d75, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_338c12e15b03388d, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f060f3eeb795497, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5b56090a469fd494, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame Frame::getAncestor(jint a0) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getAncestor_d41f06476b4facac], a0));
      }

      jint Frame::getDepth() const
      {
        return env->callIntMethod(this$, mids$[mid_getDepth_d6ab429752e7c267]);
      }

      Frame Frame::getFrozenFrame(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::java::lang::String & a2) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getFrozenFrame_80f13c4cdaa2d426], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String Frame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      Frame Frame::getParent() const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getParent_cb151471db4570f0]));
      }

      Frame Frame::getRoot()
      {
        jclass cls = env->getClass(initializeClass);
        return Frame(env->callStaticObjectMethod(cls, mids$[mid_getRoot_cb151471db4570f0]));
      }

      ::org::orekit::frames::StaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_60e345a418d4662f], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldStaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_e73be67fef493a57], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider Frame::getTransformProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getTransformProvider_fd7cd467d992431a]));
      }

      ::org::orekit::frames::Transform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransformTo_ccc97eb30f689f7c], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransformTo_a8bd256671a35bf7], a0.this$, a1.this$));
      }

      jboolean Frame::isChildOf(const Frame & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isChildOf_295aca1f11b596c0], a0.this$);
      }

      jboolean Frame::isPseudoInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPseudoInertial_eee3de00fe971136]);
      }

      ::java::lang::String Frame::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_getDepth(t_Frame *self);
      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getName(t_Frame *self);
      static PyObject *t_Frame_getParent(t_Frame *self);
      static PyObject *t_Frame_getRoot(PyTypeObject *type);
      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getTransformProvider(t_Frame *self);
      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_isPseudoInertial(t_Frame *self);
      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_get__depth(t_Frame *self, void *data);
      static PyObject *t_Frame_get__name(t_Frame *self, void *data);
      static PyObject *t_Frame_get__parent(t_Frame *self, void *data);
      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data);
      static PyObject *t_Frame_get__root(t_Frame *self, void *data);
      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data);
      static PyGetSetDef t_Frame__fields_[] = {
        DECLARE_GET_FIELD(t_Frame, depth),
        DECLARE_GET_FIELD(t_Frame, name),
        DECLARE_GET_FIELD(t_Frame, parent),
        DECLARE_GET_FIELD(t_Frame, pseudoInertial),
        DECLARE_GET_FIELD(t_Frame, root),
        DECLARE_GET_FIELD(t_Frame, transformProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frame__methods_[] = {
        DECLARE_METHOD(t_Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, getAncestor, METH_O),
        DECLARE_METHOD(t_Frame, getDepth, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getFrozenFrame, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getName, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getParent, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getRoot, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Frame, getStaticTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getTransformProvider, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, isChildOf, METH_O),
        DECLARE_METHOD(t_Frame, isPseudoInertial, METH_NOARGS),
        DECLARE_METHOD(t_Frame, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frame)[] = {
        { Py_tp_methods, t_Frame__methods_ },
        { Py_tp_init, (void *) t_Frame_init_ },
        { Py_tp_getset, t_Frame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frame, t_Frame, Frame);

      void t_Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(Frame), &PY_TYPE_DEF(Frame), module, "Frame", 0);
      }

      void t_Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "class_", make_descriptor(Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "wrapfn_", make_descriptor(t_Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frame::initializeClass, 1)))
          return NULL;
        return t_Frame::wrap_Object(Frame(((t_Frame *) arg)->object.this$));
      }
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
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

      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg)
      {
        jint a0;
        Frame result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getAncestor(a0));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAncestor", arg);
        return NULL;
      }

      static PyObject *t_Frame_getDepth(t_Frame *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDepth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args)
      {
        Frame a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        Frame result((jobject) NULL);

        if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getFrozenFrame(a0, a1, a2));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrozenFrame", args);
        return NULL;
      }

      static PyObject *t_Frame_getName(t_Frame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Frame_getParent(t_Frame *self)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getParent());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getRoot(PyTypeObject *type)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::Frame::getRoot());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_getTransformProvider(t_Frame *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg)
      {
        Frame a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isChildOf(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isChildOf", arg);
        return NULL;
      }

      static PyObject *t_Frame_isPseudoInertial(t_Frame *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPseudoInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frame), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frame_get__depth(t_Frame *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDepth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Frame_get__name(t_Frame *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_Frame_get__parent(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getParent());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPseudoInertial());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Frame_get__root(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoot());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *NullArgumentException::class$ = NULL;
      jmethodID *NullArgumentException::mids$ = NULL;
      bool NullArgumentException::live$ = false;

      jclass NullArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/NullArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NullArgumentException::NullArgumentException() : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      NullArgumentException::NullArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      ::java::lang::String NullArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String NullArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String NullArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > NullArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable NullArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data);
      static PyGetSetDef t_NullArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_NullArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_NullArgumentException, message),
        DECLARE_GET_FIELD(t_NullArgumentException, parts),
        DECLARE_GET_FIELD(t_NullArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NullArgumentException__methods_[] = {
        DECLARE_METHOD(t_NullArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_NullArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NullArgumentException)[] = {
        { Py_tp_methods, t_NullArgumentException__methods_ },
        { Py_tp_init, (void *) t_NullArgumentException_init_ },
        { Py_tp_getset, t_NullArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NullArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::NullPointerException),
        NULL
      };

      DEFINE_TYPE(NullArgumentException, t_NullArgumentException, NullArgumentException);

      void t_NullArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(NullArgumentException), &PY_TYPE_DEF(NullArgumentException), module, "NullArgumentException", 0);
      }

      void t_NullArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "class_", make_descriptor(NullArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "wrapfn_", make_descriptor(t_NullArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NullArgumentException::initializeClass, 1)))
          return NULL;
        return t_NullArgumentException::wrap_Object(NullArgumentException(((t_NullArgumentException *) arg)->object.this$));
      }
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NullArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            NullArgumentException object((jobject) NULL);

            INT_CALL(object = NullArgumentException());
            self->object = object;
            break;
          }
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            NullArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = NullArgumentException(a0, a1));
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

      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *SubOrientedPoint::class$ = NULL;
          jmethodID *SubOrientedPoint::mids$ = NULL;
          bool SubOrientedPoint::live$ = false;

          jclass SubOrientedPoint::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/SubOrientedPoint");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5428b0a00a62bde3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_9981f74b2d109da6] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_b587049e19682418] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_35b28ef87fdef21f] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubOrientedPoint::SubOrientedPoint(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_5428b0a00a62bde3, a0.this$, a1.this$)) {}

          jdouble SubOrientedPoint::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_9981f74b2d109da6]);
          }

          jboolean SubOrientedPoint::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubOrientedPoint::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_b587049e19682418], a0.this$));
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
        namespace oned {
          static PyObject *t_SubOrientedPoint_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubOrientedPoint_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubOrientedPoint_of_(t_SubOrientedPoint *self, PyObject *args);
          static int t_SubOrientedPoint_init_(t_SubOrientedPoint *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubOrientedPoint_getSize(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_isEmpty(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_split(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_get__empty(t_SubOrientedPoint *self, void *data);
          static PyObject *t_SubOrientedPoint_get__size(t_SubOrientedPoint *self, void *data);
          static PyObject *t_SubOrientedPoint_get__parameters_(t_SubOrientedPoint *self, void *data);
          static PyGetSetDef t_SubOrientedPoint__fields_[] = {
            DECLARE_GET_FIELD(t_SubOrientedPoint, empty),
            DECLARE_GET_FIELD(t_SubOrientedPoint, size),
            DECLARE_GET_FIELD(t_SubOrientedPoint, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubOrientedPoint__methods_[] = {
            DECLARE_METHOD(t_SubOrientedPoint, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubOrientedPoint, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubOrientedPoint, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, getSize, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubOrientedPoint)[] = {
            { Py_tp_methods, t_SubOrientedPoint__methods_ },
            { Py_tp_init, (void *) t_SubOrientedPoint_init_ },
            { Py_tp_getset, t_SubOrientedPoint__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubOrientedPoint)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubOrientedPoint, t_SubOrientedPoint, SubOrientedPoint);
          PyObject *t_SubOrientedPoint::wrap_Object(const SubOrientedPoint& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubOrientedPoint::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubOrientedPoint *self = (t_SubOrientedPoint *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubOrientedPoint::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubOrientedPoint::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubOrientedPoint *self = (t_SubOrientedPoint *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubOrientedPoint::install(PyObject *module)
          {
            installType(&PY_TYPE(SubOrientedPoint), &PY_TYPE_DEF(SubOrientedPoint), module, "SubOrientedPoint", 0);
          }

          void t_SubOrientedPoint::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "class_", make_descriptor(SubOrientedPoint::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "wrapfn_", make_descriptor(t_SubOrientedPoint::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubOrientedPoint_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubOrientedPoint::initializeClass, 1)))
              return NULL;
            return t_SubOrientedPoint::wrap_Object(SubOrientedPoint(((t_SubOrientedPoint *) arg)->object.this$));
          }
          static PyObject *t_SubOrientedPoint_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubOrientedPoint::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubOrientedPoint_of_(t_SubOrientedPoint *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubOrientedPoint_init_(t_SubOrientedPoint *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubOrientedPoint object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubOrientedPoint(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubOrientedPoint_getSize(t_SubOrientedPoint *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSize());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "getSize", args, 2);
          }

          static PyObject *t_SubOrientedPoint_isEmpty(t_SubOrientedPoint *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_SubOrientedPoint_split(t_SubOrientedPoint *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubOrientedPoint_get__parameters_(t_SubOrientedPoint *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubOrientedPoint_get__empty(t_SubOrientedPoint *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SubOrientedPoint_get__size(t_SubOrientedPoint *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarS::class$ = NULL;
          jmethodID *CopolarS::mids$ = NULL;
          bool CopolarS::live$ = false;

          jclass CopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_9981f74b2d109da6] = env->getMethodID(cls, "cs", "()D");
              mids$[mid_ds_9981f74b2d109da6] = env->getMethodID(cls, "ds", "()D");
              mids$[mid_ns_9981f74b2d109da6] = env->getMethodID(cls, "ns", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarS::cs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cs_9981f74b2d109da6]);
          }

          jdouble CopolarS::ds() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ds_9981f74b2d109da6]);
          }

          jdouble CopolarS::ns() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ns_9981f74b2d109da6]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_cs(t_CopolarS *self);
          static PyObject *t_CopolarS_ds(t_CopolarS *self);
          static PyObject *t_CopolarS_ns(t_CopolarS *self);

          static PyMethodDef t_CopolarS__methods_[] = {
            DECLARE_METHOD(t_CopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarS)[] = {
            { Py_tp_methods, t_CopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarS, t_CopolarS, CopolarS);

          void t_CopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarS), &PY_TYPE_DEF(CopolarS), module, "CopolarS", 0);
          }

          void t_CopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "class_", make_descriptor(CopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "wrapfn_", make_descriptor(t_CopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarS::initializeClass, 1)))
              return NULL;
            return t_CopolarS::wrap_Object(CopolarS(((t_CopolarS *) arg)->object.this$));
          }
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarS_cs(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ds(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ds());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ns(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ns());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVector::class$ = NULL;
            jmethodID *StateVector::mids$ = NULL;
            bool StateVector::live$ = false;

            jclass StateVector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getPositionVector_032312bdeb3f2f93] = env->getMethodID(cls, "getPositionVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVelocityVector_032312bdeb3f2f93] = env->getMethodID(cls, "getVelocityVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_setX_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setXdot", "(D)V");
                mids$[mid_setY_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setYdot", "(D)V");
                mids$[mid_setZ_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZdot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setZdot", "(D)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getPositionVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionVector_032312bdeb3f2f93]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getVelocityVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityVector_032312bdeb3f2f93]));
            }

            void StateVector::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_1ad26e8c8c0cd65b], a0);
            }

            void StateVector::setXdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXdot_1ad26e8c8c0cd65b], a0);
            }

            void StateVector::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_1ad26e8c8c0cd65b], a0);
            }

            void StateVector::setYdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYdot_1ad26e8c8c0cd65b], a0);
            }

            void StateVector::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_1ad26e8c8c0cd65b], a0);
            }

            void StateVector::setZdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZdot_1ad26e8c8c0cd65b], a0);
            }

            void StateVector::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
          namespace cdm {
            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds);
            static PyObject *t_StateVector_getPositionVector(t_StateVector *self);
            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self);
            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data);
            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data);
            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data);
            static PyGetSetDef t_StateVector__fields_[] = {
              DECLARE_GET_FIELD(t_StateVector, positionVector),
              DECLARE_GET_FIELD(t_StateVector, velocityVector),
              DECLARE_SET_FIELD(t_StateVector, x),
              DECLARE_SET_FIELD(t_StateVector, xdot),
              DECLARE_SET_FIELD(t_StateVector, y),
              DECLARE_SET_FIELD(t_StateVector, ydot),
              DECLARE_SET_FIELD(t_StateVector, z),
              DECLARE_SET_FIELD(t_StateVector, zdot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVector__methods_[] = {
              DECLARE_METHOD(t_StateVector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, getPositionVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, getVelocityVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, setX, METH_O),
              DECLARE_METHOD(t_StateVector, setXdot, METH_O),
              DECLARE_METHOD(t_StateVector, setY, METH_O),
              DECLARE_METHOD(t_StateVector, setYdot, METH_O),
              DECLARE_METHOD(t_StateVector, setZ, METH_O),
              DECLARE_METHOD(t_StateVector, setZdot, METH_O),
              DECLARE_METHOD(t_StateVector, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVector)[] = {
              { Py_tp_methods, t_StateVector__methods_ },
              { Py_tp_init, (void *) t_StateVector_init_ },
              { Py_tp_getset, t_StateVector__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVector)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(StateVector, t_StateVector, StateVector);

            void t_StateVector::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVector), &PY_TYPE_DEF(StateVector), module, "StateVector", 0);
            }

            void t_StateVector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "class_", make_descriptor(StateVector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "wrapfn_", make_descriptor(t_StateVector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVector::initializeClass, 1)))
                return NULL;
              return t_StateVector::wrap_Object(StateVector(((t_StateVector *) arg)->object.this$));
            }
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds)
            {
              StateVector object((jobject) NULL);

              INT_CALL(object = StateVector());
              self->object = object;

              return 0;
            }

            static PyObject *t_StateVector_getPositionVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(StateVector), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xdot", arg);
              return -1;
            }

            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ydot", arg);
              return -1;
            }

            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zdot", arg);
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
#include "org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonAbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonAbstractGNSSAttitudeProvider::mids$ = NULL;
        bool PythonAbstractGNSSAttitudeProvider::live$ = false;

        jclass PythonAbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1f1fb4db65d1e285] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGNSSAttitudeProvider::PythonAbstractGNSSAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_1f1fb4db65d1e285, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractGNSSAttitudeProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace attitude {
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args);
        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonAbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonAbstractGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGNSSAttitudeProvider, t_PythonAbstractGNSSAttitudeProvider, PythonAbstractGNSSAttitudeProvider);

        void t_PythonAbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGNSSAttitudeProvider), &PY_TYPE_DEF(PythonAbstractGNSSAttitudeProvider), module, "PythonAbstractGNSSAttitudeProvider", 1);
        }

        void t_PythonAbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "class_", make_descriptor(PythonAbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGNSSAttitudeProvider::wrap_Object(PythonAbstractGNSSAttitudeProvider(((t_PythonAbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          PythonAbstractGNSSAttitudeProvider object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractGNSSAttitudeProvider(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data)
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
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/String.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile::class$ = NULL;
        jmethodID *EphemerisFile::mids$ = NULL;
        bool EphemerisFile::live$ = false;

        jclass EphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map EphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_EphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile_of_(t_EphemerisFile *self, PyObject *args);
        static PyObject *t_EphemerisFile_getSatellites(t_EphemerisFile *self);
        static PyObject *t_EphemerisFile_get__satellites(t_EphemerisFile *self, void *data);
        static PyObject *t_EphemerisFile_get__parameters_(t_EphemerisFile *self, void *data);
        static PyGetSetDef t_EphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile, satellites),
          DECLARE_GET_FIELD(t_EphemerisFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile)[] = {
          { Py_tp_methods, t_EphemerisFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile, t_EphemerisFile, EphemerisFile);
        PyObject *t_EphemerisFile::wrap_Object(const EphemerisFile& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile *self = (t_EphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EphemerisFile::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile *self = (t_EphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile), &PY_TYPE_DEF(EphemerisFile), module, "EphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "EphemerisSegment", make_descriptor(&PY_TYPE_DEF(EphemerisFile$EphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "SatelliteEphemeris", make_descriptor(&PY_TYPE_DEF(EphemerisFile$SatelliteEphemeris)));
        }

        void t_EphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "class_", make_descriptor(EphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "wrapfn_", make_descriptor(t_EphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile::wrap_Object(EphemerisFile(((t_EphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile_of_(t_EphemerisFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile_getSatellites(t_EphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile_get__parameters_(t_EphemerisFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile_get__satellites(t_EphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
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
          mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_49361735afeac738] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointVectorValuePair;Lorg/hipparchus/optim/PointVectorValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

      jboolean SimpleVectorValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointVectorValuePair & a1, const ::org::hipparchus::optim::PointVectorValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_49361735afeac738], a0, a1.this$, a2.this$);
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
#include "org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GraggBulirschStoerIntegrator::class$ = NULL;
        jmethodID *GraggBulirschStoerIntegrator::mids$ = NULL;
        bool GraggBulirschStoerIntegrator::live$ = false;

        jclass GraggBulirschStoerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e3195482263a60ce] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_integrate_3b00c059d3ccb86d] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setControlFactors_cd5724127cc72e96] = env->getMethodID(cls, "setControlFactors", "(DDDD)V");
            mids$[mid_setInterpolationControl_9ad18b76c4bb23bb] = env->getMethodID(cls, "setInterpolationControl", "(ZI)V");
            mids$[mid_setOrderControl_aaed259e1b5f1153] = env->getMethodID(cls, "setOrderControl", "(IDD)V");
            mids$[mid_setStabilityCheck_7b4ee475caeca5a6] = env->getMethodID(cls, "setStabilityCheck", "(ZIID)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e3195482263a60ce, a0, a1, a2.this$, a3.this$)) {}

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative GraggBulirschStoerIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3b00c059d3ccb86d], a0.this$, a1.this$, a2));
        }

        void GraggBulirschStoerIntegrator::setControlFactors(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setControlFactors_cd5724127cc72e96], a0, a1, a2, a3);
        }

        void GraggBulirschStoerIntegrator::setInterpolationControl(jboolean a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationControl_9ad18b76c4bb23bb], a0, a1);
        }

        void GraggBulirschStoerIntegrator::setOrderControl(jint a0, jdouble a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrderControl_aaed259e1b5f1153], a0, a1, a2);
        }

        void GraggBulirschStoerIntegrator::setStabilityCheck(jboolean a0, jint a1, jint a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStabilityCheck_7b4ee475caeca5a6], a0, a1, a2, a3);
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
        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args);

        static PyMethodDef t_GraggBulirschStoerIntegrator__methods_[] = {
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setControlFactors, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setInterpolationControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setOrderControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setStabilityCheck, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GraggBulirschStoerIntegrator)[] = {
          { Py_tp_methods, t_GraggBulirschStoerIntegrator__methods_ },
          { Py_tp_init, (void *) t_GraggBulirschStoerIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GraggBulirschStoerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(GraggBulirschStoerIntegrator, t_GraggBulirschStoerIntegrator, GraggBulirschStoerIntegrator);

        void t_GraggBulirschStoerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GraggBulirschStoerIntegrator), &PY_TYPE_DEF(GraggBulirschStoerIntegrator), module, "GraggBulirschStoerIntegrator", 0);
        }

        void t_GraggBulirschStoerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "class_", make_descriptor(GraggBulirschStoerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "wrapfn_", make_descriptor(t_GraggBulirschStoerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 1)))
            return NULL;
          return t_GraggBulirschStoerIntegrator::wrap_Object(GraggBulirschStoerIntegrator(((t_GraggBulirschStoerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
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

        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GraggBulirschStoerIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setControlFactors(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setControlFactors", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;

          if (!parseArgs(args, "ZI", &a0, &a1))
          {
            OBJ_CALL(self->object.setInterpolationControl(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setOrderControl(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrderControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "ZIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setStabilityCheck(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStabilityCheck", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *Localizable::class$ = NULL;
      jmethodID *Localizable::mids$ = NULL;
      bool Localizable::live$ = false;

      jclass Localizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/Localizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_5969ecf7afac3dba] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Localizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_5969ecf7afac3dba], a0.this$));
      }

      ::java::lang::String Localizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_d2c8eb4129821f0e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_Localizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Localizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Localizable_getLocalizedString(t_Localizable *self, PyObject *arg);
      static PyObject *t_Localizable_getSourceString(t_Localizable *self);
      static PyObject *t_Localizable_get__sourceString(t_Localizable *self, void *data);
      static PyGetSetDef t_Localizable__fields_[] = {
        DECLARE_GET_FIELD(t_Localizable, sourceString),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Localizable__methods_[] = {
        DECLARE_METHOD(t_Localizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Localizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Localizable, getLocalizedString, METH_O),
        DECLARE_METHOD(t_Localizable, getSourceString, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Localizable)[] = {
        { Py_tp_methods, t_Localizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Localizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Localizable)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Localizable, t_Localizable, Localizable);

      void t_Localizable::install(PyObject *module)
      {
        installType(&PY_TYPE(Localizable), &PY_TYPE_DEF(Localizable), module, "Localizable", 0);
      }

      void t_Localizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "class_", make_descriptor(Localizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "wrapfn_", make_descriptor(t_Localizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Localizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Localizable::initializeClass, 1)))
          return NULL;
        return t_Localizable::wrap_Object(Localizable(((t_Localizable *) arg)->object.this$));
      }
      static PyObject *t_Localizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Localizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Localizable_getLocalizedString(t_Localizable *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_Localizable_getSourceString(t_Localizable *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_Localizable_get__sourceString(t_Localizable *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *PivotingStrategy::class$ = NULL;
      jmethodID *PivotingStrategy::mids$ = NULL;
      bool PivotingStrategy::live$ = false;
      PivotingStrategy *PivotingStrategy::CENTRAL = NULL;
      PivotingStrategy *PivotingStrategy::MEDIAN_OF_3 = NULL;

      jclass PivotingStrategy::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/PivotingStrategy");

          mids$ = new jmethodID[max_mid];
          mids$[mid_pivotIndex_51377fedbacf0ff8] = env->getMethodID(cls, "pivotIndex", "([DII)I");
          mids$[mid_valueOf_f3092389c23c2790] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_values_64b9d3ceaaaff394] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/PivotingStrategy;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CENTRAL = new PivotingStrategy(env->getStaticObjectField(cls, "CENTRAL", "Lorg/hipparchus/util/PivotingStrategy;"));
          MEDIAN_OF_3 = new PivotingStrategy(env->getStaticObjectField(cls, "MEDIAN_OF_3", "Lorg/hipparchus/util/PivotingStrategy;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint PivotingStrategy::pivotIndex(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_pivotIndex_51377fedbacf0ff8], a0.this$, a1, a2);
      }

      PivotingStrategy PivotingStrategy::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PivotingStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f3092389c23c2790], a0.this$));
      }

      JArray< PivotingStrategy > PivotingStrategy::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PivotingStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_64b9d3ceaaaff394]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PivotingStrategy_values(PyTypeObject *type);
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data);
      static PyGetSetDef t_PivotingStrategy__fields_[] = {
        DECLARE_GET_FIELD(t_PivotingStrategy, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PivotingStrategy__methods_[] = {
        DECLARE_METHOD(t_PivotingStrategy, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, of_, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, pivotIndex, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PivotingStrategy)[] = {
        { Py_tp_methods, t_PivotingStrategy__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PivotingStrategy__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PivotingStrategy)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PivotingStrategy, t_PivotingStrategy, PivotingStrategy);
      PyObject *t_PivotingStrategy::wrap_Object(const PivotingStrategy& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PivotingStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PivotingStrategy::install(PyObject *module)
      {
        installType(&PY_TYPE(PivotingStrategy), &PY_TYPE_DEF(PivotingStrategy), module, "PivotingStrategy", 0);
      }

      void t_PivotingStrategy::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "class_", make_descriptor(PivotingStrategy::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "wrapfn_", make_descriptor(t_PivotingStrategy::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "boxfn_", make_descriptor(boxObject));
        env->getClass(PivotingStrategy::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "CENTRAL", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::CENTRAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "MEDIAN_OF_3", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::MEDIAN_OF_3)));
      }

      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PivotingStrategy::initializeClass, 1)))
          return NULL;
        return t_PivotingStrategy::wrap_Object(PivotingStrategy(((t_PivotingStrategy *) arg)->object.this$));
      }
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PivotingStrategy::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        jint a2;
        jint result;

        if (!parseArgs(args, "[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.pivotIndex(a0, a1, a2));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "pivotIndex", args);
        return NULL;
      }

      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PivotingStrategy result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::valueOf(a0));
          return t_PivotingStrategy::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PivotingStrategy_values(PyTypeObject *type)
      {
        JArray< PivotingStrategy > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::values());
        return JArray<jobject>(result.this$).wrap(t_PivotingStrategy::wrap_jobject);
      }
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/frames/LOFType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OrbitRelativeFrame::class$ = NULL;
          jmethodID *OrbitRelativeFrame::mids$ = NULL;
          bool OrbitRelativeFrame::live$ = false;
          OrbitRelativeFrame *OrbitRelativeFrame::EQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::PQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::QSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RIC = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RTN = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_ROTATING = NULL;

          jclass OrbitRelativeFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OrbitRelativeFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getLofType_2ef6889b4bcd6216] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
              mids$[mid_isQuasiInertial_eee3de00fe971136] = env->getMethodID(cls, "isQuasiInertial", "()Z");
              mids$[mid_valueOf_1c26dd15f9c5f2a2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_values_c4d360633d15ed4a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "EQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              PQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "PQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              QSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RIC = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RIC", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RTN = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::LOFType OrbitRelativeFrame::getLofType() const
          {
            return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_2ef6889b4bcd6216]));
          }

          jboolean OrbitRelativeFrame::isQuasiInertial() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_eee3de00fe971136]);
          }

          OrbitRelativeFrame OrbitRelativeFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OrbitRelativeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1c26dd15f9c5f2a2], a0.this$));
          }

          JArray< OrbitRelativeFrame > OrbitRelativeFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OrbitRelativeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_c4d360633d15ed4a]));
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
        namespace definitions {
          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type);
          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data);
          static PyGetSetDef t_OrbitRelativeFrame__fields_[] = {
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, lofType),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, quasiInertial),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrbitRelativeFrame__methods_[] = {
            DECLARE_METHOD(t_OrbitRelativeFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, getLofType, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, isQuasiInertial, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrbitRelativeFrame)[] = {
            { Py_tp_methods, t_OrbitRelativeFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OrbitRelativeFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrbitRelativeFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OrbitRelativeFrame, t_OrbitRelativeFrame, OrbitRelativeFrame);
          PyObject *t_OrbitRelativeFrame::wrap_Object(const OrbitRelativeFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OrbitRelativeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OrbitRelativeFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(OrbitRelativeFrame), &PY_TYPE_DEF(OrbitRelativeFrame), module, "OrbitRelativeFrame", 0);
          }

          void t_OrbitRelativeFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "class_", make_descriptor(OrbitRelativeFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "wrapfn_", make_descriptor(t_OrbitRelativeFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(OrbitRelativeFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "EQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::EQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "PQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::PQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "QSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::QSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RIC", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RTN", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RTN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_ROTATING)));
          }

          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrbitRelativeFrame::initializeClass, 1)))
              return NULL;
            return t_OrbitRelativeFrame::wrap_Object(OrbitRelativeFrame(((t_OrbitRelativeFrame *) arg)->object.this$));
          }
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrbitRelativeFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self)
          {
            ::org::orekit::frames::LOFType result((jobject) NULL);
            OBJ_CALL(result = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(result);
          }

          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isQuasiInertial());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OrbitRelativeFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::valueOf(a0));
              return t_OrbitRelativeFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type)
          {
            JArray< OrbitRelativeFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::values());
            return JArray<jobject>(result.this$).wrap(t_OrbitRelativeFrame::wrap_jobject);
          }
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data)
          {
            ::org::orekit::frames::LOFType value((jobject) NULL);
            OBJ_CALL(value = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(value);
          }

          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isQuasiInertial());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/ConstantThrustManeuver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConstantThrustManeuver::class$ = NULL;
        jmethodID *ConstantThrustManeuver::mids$ = NULL;
        bool ConstantThrustManeuver::live$ = false;

        jclass ConstantThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConstantThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_74034180fd61f214] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_db3ac5fd76ec2ad9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_7196b47f4b26db4c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_ed4aad723e1e1fe5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_2f948334f1d5875b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_9b205a950ebc27e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_8a4d34e8a5bc498f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
            mids$[mid_getDirection_032312bdeb3f2f93] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDirection_8b37cafaaf55a3a5] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDuration_9981f74b2d109da6] = env->getMethodID(cls, "getDuration", "()D");
            mids$[mid_getEndDate_80e11148db499dda] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFlowRate_9981f74b2d109da6] = env->getMethodID(cls, "getFlowRate", "()D");
            mids$[mid_getFlowRate_209f08246d708042] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getIsp_9981f74b2d109da6] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_209f08246d708042] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getStartDate_80e11148db499dda] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getThrustMagnitude_9981f74b2d109da6] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_209f08246d708042] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustVector_032312bdeb3f2f93] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getThrustVector_8b37cafaaf55a3a5] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_isFiring_712e981f67f3ccbe] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_isFiring_34f098c1d43e614c] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/SpacecraftState;)Z");
            mids$[mid_isFiring_b16e79ba1b2830a1] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a2) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_74034180fd61f214, a0.this$, a1.this$, a2.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_db3ac5fd76ec2ad9, a0.this$, a1, a2.this$, a3.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_7196b47f4b26db4c, a0.this$, a1, a2, a3, a4.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::java::lang::String & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_ed4aad723e1e1fe5, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_2f948334f1d5875b, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::java::lang::String & a6) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_9b205a950ebc27e1, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a6, const ::java::lang::String & a7) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_8a4d34e8a5bc498f, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$, a7.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_8b37cafaaf55a3a5], a0.this$));
        }

        jdouble ConstantThrustManeuver::getDuration() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDuration_9981f74b2d109da6]);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getEndDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_80e11148db499dda]));
        }

        jdouble ConstantThrustManeuver::getFlowRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_9981f74b2d109da6]);
        }

        jdouble ConstantThrustManeuver::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_209f08246d708042], a0.this$);
        }

        jdouble ConstantThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_9981f74b2d109da6]);
        }

        jdouble ConstantThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_209f08246d708042], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getStartDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_80e11148db499dda]));
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_9981f74b2d109da6]);
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_209f08246d708042], a0.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8b37cafaaf55a3a5], a0.this$));
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_712e981f67f3ccbe], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_34f098c1d43e614c], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_b16e79ba1b2830a1], a0.this$);
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
    namespace forces {
      namespace maneuvers {
        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data);
        static PyGetSetDef t_ConstantThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, direction),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, duration),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, endDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, flowRate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, startDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustMagnitude),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustVector),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConstantThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDirection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDuration, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getEndDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getFlowRate, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getStartDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustMagnitude, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustVector, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, isFiring, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantThrustManeuver)[] = {
          { Py_tp_methods, t_ConstantThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConstantThrustManeuver_init_ },
          { Py_tp_getset, t_ConstantThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConstantThrustManeuver, t_ConstantThrustManeuver, ConstantThrustManeuver);

        void t_ConstantThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantThrustManeuver), &PY_TYPE_DEF(ConstantThrustManeuver), module, "ConstantThrustManeuver", 0);
        }

        void t_ConstantThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "class_", make_descriptor(ConstantThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "wrapfn_", make_descriptor(t_ConstantThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConstantThrustManeuver::wrap_Object(ConstantThrustManeuver(((t_ConstantThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a2((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_DateBasedManeuverTriggers::parameters_, &a2))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a3((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::java::lang::String a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::java::lang::String a6((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a6((jobject) NULL);
              PyTypeObject **p6;
              ::java::lang::String a7((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkkKs", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a7))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getDirection());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDirection(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDirection", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDuration());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFlowRate());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFlowRate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getThrustVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustVector(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFiring", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDuration());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFlowRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/RoughVisibilityEstimator.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *RoughVisibilityEstimator::class$ = NULL;
        jmethodID *RoughVisibilityEstimator::mids$ = NULL;
        bool RoughVisibilityEstimator::live$ = false;

        jclass RoughVisibilityEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/RoughVisibilityEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1a08f636e2eae5cb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/frames/Frame;Ljava/util/List;)V");
            mids$[mid_estimateVisibility_c0124ed8e33562a0] = env->getMethodID(cls, "estimateVisibility", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RoughVisibilityEstimator::RoughVisibilityEstimator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::frames::Frame & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a08f636e2eae5cb, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::time::AbsoluteDate RoughVisibilityEstimator::estimateVisibility(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_estimateVisibility_c0124ed8e33562a0], a0.this$));
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
        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg);

        static PyMethodDef t_RoughVisibilityEstimator__methods_[] = {
          DECLARE_METHOD(t_RoughVisibilityEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, estimateVisibility, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RoughVisibilityEstimator)[] = {
          { Py_tp_methods, t_RoughVisibilityEstimator__methods_ },
          { Py_tp_init, (void *) t_RoughVisibilityEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RoughVisibilityEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RoughVisibilityEstimator, t_RoughVisibilityEstimator, RoughVisibilityEstimator);

        void t_RoughVisibilityEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(RoughVisibilityEstimator), &PY_TYPE_DEF(RoughVisibilityEstimator), module, "RoughVisibilityEstimator", 0);
        }

        void t_RoughVisibilityEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "class_", make_descriptor(RoughVisibilityEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "wrapfn_", make_descriptor(t_RoughVisibilityEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RoughVisibilityEstimator::initializeClass, 1)))
            return NULL;
          return t_RoughVisibilityEstimator::wrap_Object(RoughVisibilityEstimator(((t_RoughVisibilityEstimator *) arg)->object.this$));
        }
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RoughVisibilityEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          RoughVisibilityEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkK", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = RoughVisibilityEstimator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.estimateVisibility(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateVisibility", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalArgumentException::class$ = NULL;
    jmethodID *IllegalArgumentException::mids$ = NULL;
    bool IllegalArgumentException::live$ = false;

    jclass IllegalArgumentException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalArgumentException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalArgumentException::IllegalArgumentException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalArgumentException__methods_[] = {
      DECLARE_METHOD(t_IllegalArgumentException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalArgumentException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalArgumentException)[] = {
      { Py_tp_methods, t_IllegalArgumentException__methods_ },
      { Py_tp_init, (void *) t_IllegalArgumentException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalArgumentException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(IllegalArgumentException, t_IllegalArgumentException, IllegalArgumentException);

    void t_IllegalArgumentException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalArgumentException), &PY_TYPE_DEF(IllegalArgumentException), module, "IllegalArgumentException", 0);
    }

    void t_IllegalArgumentException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "class_", make_descriptor(IllegalArgumentException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "wrapfn_", make_descriptor(t_IllegalArgumentException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalArgumentException::initializeClass, 1)))
        return NULL;
      return t_IllegalArgumentException::wrap_Object(IllegalArgumentException(((t_IllegalArgumentException *) arg)->object.this$));
    }
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalArgumentException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalArgumentException object((jobject) NULL);

          INT_CALL(object = IllegalArgumentException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IllegalArgumentException(a0, a1));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *LocalizedGeometryFormats::class$ = NULL;
      jmethodID *LocalizedGeometryFormats::mids$ = NULL;
      bool LocalizedGeometryFormats::live$ = false;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSE_VERTICES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUT_OF_PLANE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::TOO_SMALL_TOLERANCE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = NULL;

      jclass LocalizedGeometryFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/LocalizedGeometryFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_5969ecf7afac3dba] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_bb5081bfb612c5df] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/LocalizedGeometryFormats;");
          mids$[mid_values_6eeabf92228fc6ba] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/LocalizedGeometryFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSE_VERTICES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSE_VERTICES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CROSSING_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CROSSING_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          EDGE_CONNECTED_TO_ONE_FACET = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "EDGE_CONNECTED_TO_ONE_FACET", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_ORIENTATION_MISMATCH = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_ORIENTATION_MISMATCH", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_WITH_SEVERAL_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INCONSISTENT_STATE_AT_2_PI_WRAPPING = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INCONSISTENT_STATE_AT_2_PI_WRAPPING", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INVALID_ROTATION_ORDER_NAME = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INVALID_ROTATION_ORDER_NAME", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NON_INVERTIBLE_TRANSFORM = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NON_INVERTIBLE_TRANSFORM", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX_HYPERPLANES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX_HYPERPLANES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_SUPPORTED_IN_DIMENSION_N = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_IN_DIMENSION_N", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUTLINE_BOUNDARY_LOOP_OPEN = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUTLINE_BOUNDARY_LOOP_OPEN", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUT_OF_PLANE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUT_OF_PLANE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ROTATION_MATRIX_DIMENSIONS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ROTATION_MATRIX_DIMENSIONS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          TOO_SMALL_TOLERANCE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "TOO_SMALL_TOLERANCE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          UNABLE_TO_ORTHOGONOLIZE_MATRIX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "UNABLE_TO_ORTHOGONOLIZE_MATRIX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_AXIS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_AXIS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedGeometryFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_5969ecf7afac3dba], a0.this$));
      }

      ::java::lang::String LocalizedGeometryFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_d2c8eb4129821f0e]));
      }

      LocalizedGeometryFormats LocalizedGeometryFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedGeometryFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bb5081bfb612c5df], a0.this$));
      }

      JArray< LocalizedGeometryFormats > LocalizedGeometryFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedGeometryFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_6eeabf92228fc6ba]));
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
      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self);
      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data);
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data);
      static PyGetSetDef t_LocalizedGeometryFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedGeometryFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedGeometryFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedGeometryFormats)[] = {
        { Py_tp_methods, t_LocalizedGeometryFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedGeometryFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedGeometryFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedGeometryFormats, t_LocalizedGeometryFormats, LocalizedGeometryFormats);
      PyObject *t_LocalizedGeometryFormats::wrap_Object(const LocalizedGeometryFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedGeometryFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedGeometryFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedGeometryFormats), &PY_TYPE_DEF(LocalizedGeometryFormats), module, "LocalizedGeometryFormats", 0);
      }

      void t_LocalizedGeometryFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "class_", make_descriptor(LocalizedGeometryFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "wrapfn_", make_descriptor(t_LocalizedGeometryFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedGeometryFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSE_VERTICES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSE_VERTICES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CROSSING_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "EDGE_CONNECTED_TO_ONE_FACET", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_ORIENTATION_MISMATCH", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INCONSISTENT_STATE_AT_2_PI_WRAPPING", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INVALID_ROTATION_ORDER_NAME", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NON_INVERTIBLE_TRANSFORM", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX_HYPERPLANES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_SUPPORTED_IN_DIMENSION_N", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUTLINE_BOUNDARY_LOOP_OPEN", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUT_OF_PLANE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUT_OF_PLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ROTATION_MATRIX_DIMENSIONS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "TOO_SMALL_TOLERANCE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::TOO_SMALL_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "UNABLE_TO_ORTHOGONOLIZE_MATRIX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_AXIS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR)));
      }

      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedGeometryFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedGeometryFormats::wrap_Object(LocalizedGeometryFormats(((t_LocalizedGeometryFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedGeometryFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedGeometryFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::valueOf(a0));
          return t_LocalizedGeometryFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedGeometryFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedGeometryFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "java/lang/String.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Station$ReferenceSystem::class$ = NULL;
        jmethodID *Station$ReferenceSystem::mids$ = NULL;
        bool Station$ReferenceSystem::live$ = false;
        Station$ReferenceSystem *Station$ReferenceSystem::UNE = NULL;
        Station$ReferenceSystem *Station$ReferenceSystem::XYZ = NULL;

        jclass Station$ReferenceSystem::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Station$ReferenceSystem");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEccRefSystem_c04936d1e4042a0d] = env->getStaticMethodID(cls, "getEccRefSystem", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_valueOf_c04936d1e4042a0d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_values_1847f98486619384] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sinex/Station$ReferenceSystem;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            UNE = new Station$ReferenceSystem(env->getStaticObjectField(cls, "UNE", "Lorg/orekit/files/sinex/Station$ReferenceSystem;"));
            XYZ = new Station$ReferenceSystem(env->getStaticObjectField(cls, "XYZ", "Lorg/orekit/files/sinex/Station$ReferenceSystem;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Station$ReferenceSystem Station$ReferenceSystem::getEccRefSystem(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_getEccRefSystem_c04936d1e4042a0d], a0.this$));
        }

        ::java::lang::String Station$ReferenceSystem::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        Station$ReferenceSystem Station$ReferenceSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c04936d1e4042a0d], a0.this$));
        }

        JArray< Station$ReferenceSystem > Station$ReferenceSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Station$ReferenceSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_1847f98486619384]));
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
      namespace sinex {
        static PyObject *t_Station$ReferenceSystem_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_of_(t_Station$ReferenceSystem *self, PyObject *args);
        static PyObject *t_Station$ReferenceSystem_getEccRefSystem(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_getName(t_Station$ReferenceSystem *self);
        static PyObject *t_Station$ReferenceSystem_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Station$ReferenceSystem_values(PyTypeObject *type);
        static PyObject *t_Station$ReferenceSystem_get__name(t_Station$ReferenceSystem *self, void *data);
        static PyObject *t_Station$ReferenceSystem_get__parameters_(t_Station$ReferenceSystem *self, void *data);
        static PyGetSetDef t_Station$ReferenceSystem__fields_[] = {
          DECLARE_GET_FIELD(t_Station$ReferenceSystem, name),
          DECLARE_GET_FIELD(t_Station$ReferenceSystem, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Station$ReferenceSystem__methods_[] = {
          DECLARE_METHOD(t_Station$ReferenceSystem, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, of_, METH_VARARGS),
          DECLARE_METHOD(t_Station$ReferenceSystem, getEccRefSystem, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, getName, METH_NOARGS),
          DECLARE_METHOD(t_Station$ReferenceSystem, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Station$ReferenceSystem)[] = {
          { Py_tp_methods, t_Station$ReferenceSystem__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Station$ReferenceSystem__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Station$ReferenceSystem)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Station$ReferenceSystem, t_Station$ReferenceSystem, Station$ReferenceSystem);
        PyObject *t_Station$ReferenceSystem::wrap_Object(const Station$ReferenceSystem& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Station$ReferenceSystem::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Station$ReferenceSystem *self = (t_Station$ReferenceSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Station$ReferenceSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Station$ReferenceSystem::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Station$ReferenceSystem *self = (t_Station$ReferenceSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Station$ReferenceSystem::install(PyObject *module)
        {
          installType(&PY_TYPE(Station$ReferenceSystem), &PY_TYPE_DEF(Station$ReferenceSystem), module, "Station$ReferenceSystem", 0);
        }

        void t_Station$ReferenceSystem::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "class_", make_descriptor(Station$ReferenceSystem::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "wrapfn_", make_descriptor(t_Station$ReferenceSystem::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "boxfn_", make_descriptor(boxObject));
          env->getClass(Station$ReferenceSystem::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "UNE", make_descriptor(t_Station$ReferenceSystem::wrap_Object(*Station$ReferenceSystem::UNE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "XYZ", make_descriptor(t_Station$ReferenceSystem::wrap_Object(*Station$ReferenceSystem::XYZ)));
        }

        static PyObject *t_Station$ReferenceSystem_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Station$ReferenceSystem::initializeClass, 1)))
            return NULL;
          return t_Station$ReferenceSystem::wrap_Object(Station$ReferenceSystem(((t_Station$ReferenceSystem *) arg)->object.this$));
        }
        static PyObject *t_Station$ReferenceSystem_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Station$ReferenceSystem::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Station$ReferenceSystem_of_(t_Station$ReferenceSystem *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Station$ReferenceSystem_getEccRefSystem(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Station$ReferenceSystem result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::getEccRefSystem(a0));
            return t_Station$ReferenceSystem::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getEccRefSystem", arg);
          return NULL;
        }

        static PyObject *t_Station$ReferenceSystem_getName(t_Station$ReferenceSystem *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Station$ReferenceSystem_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Station$ReferenceSystem result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::valueOf(a0));
            return t_Station$ReferenceSystem::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Station$ReferenceSystem_values(PyTypeObject *type)
        {
          JArray< Station$ReferenceSystem > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::values());
          return JArray<jobject>(result.this$).wrap(t_Station$ReferenceSystem::wrap_jobject);
        }
        static PyObject *t_Station$ReferenceSystem_get__parameters_(t_Station$ReferenceSystem *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Station$ReferenceSystem_get__name(t_Station$ReferenceSystem *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool AbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass AbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_e8a4ac02afc72623] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > AbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_e8a4ac02afc72623], a0.this$));
        }

        void AbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);

        static PyMethodDef t_AbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator$MainStateEquations, t_AbstractIntegratedPropagator$MainStateEquations, AbstractIntegratedPropagator$MainStateEquations);

        void t_AbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations), module, "AbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_AbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator$MainStateEquations::wrap_Object(AbstractIntegratedPropagator$MainStateEquations(((t_AbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
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
              mids$[mid_init$_4f6a2e827b6dec38] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersPhaseModifier::PhaseCentersPhaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f6a2e827b6dec38, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void PhaseCentersPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
#include "org/hipparchus/filtering/kalman/linear/LinearKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearKalmanFilter::class$ = NULL;
          jmethodID *LinearKalmanFilter::mids$ = NULL;
          bool LinearKalmanFilter::live$ = false;

          jclass LinearKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_04f45c9810723be2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/linear/LinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_d720d2299c73357d] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearKalmanFilter::LinearKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::linear::LinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_04f45c9810723be2, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate LinearKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_d720d2299c73357d], a0.this$));
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
    namespace filtering {
      namespace kalman {
        namespace linear {
          static PyObject *t_LinearKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearKalmanFilter_of_(t_LinearKalmanFilter *self, PyObject *args);
          static int t_LinearKalmanFilter_init_(t_LinearKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LinearKalmanFilter_estimationStep(t_LinearKalmanFilter *self, PyObject *args);
          static PyObject *t_LinearKalmanFilter_get__parameters_(t_LinearKalmanFilter *self, void *data);
          static PyGetSetDef t_LinearKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_LinearKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_LinearKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_LinearKalmanFilter, estimationStep, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearKalmanFilter)[] = {
            { Py_tp_methods, t_LinearKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_LinearKalmanFilter_init_ },
            { Py_tp_getset, t_LinearKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearKalmanFilter)[] = {
            &PY_TYPE_DEF(::org::hipparchus::filtering::kalman::AbstractKalmanFilter),
            NULL
          };

          DEFINE_TYPE(LinearKalmanFilter, t_LinearKalmanFilter, LinearKalmanFilter);
          PyObject *t_LinearKalmanFilter::wrap_Object(const LinearKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearKalmanFilter *self = (t_LinearKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LinearKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearKalmanFilter *self = (t_LinearKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LinearKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearKalmanFilter), &PY_TYPE_DEF(LinearKalmanFilter), module, "LinearKalmanFilter", 0);
          }

          void t_LinearKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "class_", make_descriptor(LinearKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "wrapfn_", make_descriptor(t_LinearKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_LinearKalmanFilter::wrap_Object(LinearKalmanFilter(((t_LinearKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_LinearKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LinearKalmanFilter_of_(t_LinearKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_LinearKalmanFilter_init_(t_LinearKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::linear::LinearProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            LinearKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::linear::LinearProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::linear::t_LinearProcess::parameters_, &a2))
            {
              INT_CALL(object = LinearKalmanFilter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LinearKalmanFilter_estimationStep(t_LinearKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(LinearKalmanFilter), (PyObject *) self, "estimationStep", args, 2);
          }
          static PyObject *t_LinearKalmanFilter_get__parameters_(t_LinearKalmanFilter *self, void *data)
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
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Blendable::class$ = NULL;
      jmethodID *Blendable::mids$ = NULL;
      bool Blendable::live$ = false;

      jclass Blendable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Blendable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_blendArithmeticallyWith_5ce651c3eab79409] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;D)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Blendable::blendArithmeticallyWith(const ::java::lang::Object & a0, jdouble a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_5ce651c3eab79409], a0.this$, a1));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data);
      static PyGetSetDef t_Blendable__fields_[] = {
        DECLARE_GET_FIELD(t_Blendable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Blendable__methods_[] = {
        DECLARE_METHOD(t_Blendable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, of_, METH_VARARGS),
        DECLARE_METHOD(t_Blendable, blendArithmeticallyWith, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Blendable)[] = {
        { Py_tp_methods, t_Blendable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Blendable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Blendable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Blendable, t_Blendable, Blendable);
      PyObject *t_Blendable::wrap_Object(const Blendable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Blendable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Blendable::install(PyObject *module)
      {
        installType(&PY_TYPE(Blendable), &PY_TYPE_DEF(Blendable), module, "Blendable", 0);
      }

      void t_Blendable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "class_", make_descriptor(Blendable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "wrapfn_", make_descriptor(t_Blendable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Blendable::initializeClass, 1)))
          return NULL;
        return t_Blendable::wrap_Object(Blendable(((t_Blendable *) arg)->object.this$));
      }
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Blendable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble a1;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "OD", self->parameters[0], &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PythonPhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PythonPhaseCenterVariationFunction::mids$ = NULL;
        bool PythonPhaseCenterVariationFunction::live$ = false;

        jclass PythonPhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPhaseCenterVariationFunction::PythonPhaseCenterVariationFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonPhaseCenterVariationFunction::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonPhaseCenterVariationFunction::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonPhaseCenterVariationFunction::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace antenna {
        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self);
        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args);
        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data);
        static PyGetSetDef t_PythonPhaseCenterVariationFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPhaseCenterVariationFunction, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PythonPhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) t_PythonPhaseCenterVariationFunction_init_ },
          { Py_tp_getset, t_PythonPhaseCenterVariationFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPhaseCenterVariationFunction, t_PythonPhaseCenterVariationFunction, PythonPhaseCenterVariationFunction);

        void t_PythonPhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPhaseCenterVariationFunction), &PY_TYPE_DEF(PythonPhaseCenterVariationFunction), module, "PythonPhaseCenterVariationFunction", 1);
        }

        void t_PythonPhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "class_", make_descriptor(PythonPhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PythonPhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPhaseCenterVariationFunction::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonPhaseCenterVariationFunction_pythonDecRef0 },
            { "value", "(DD)D", (void *) t_PythonPhaseCenterVariationFunction_value1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PythonPhaseCenterVariationFunction::wrap_Object(PythonPhaseCenterVariationFunction(((t_PythonPhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds)
        {
          PythonPhaseCenterVariationFunction object((jobject) NULL);

          INT_CALL(object = PythonPhaseCenterVariationFunction());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args)
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

        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "value", "dd", (double) a0, (double) a1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("value", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data)
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
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *MeasurementDecorator::class$ = NULL;
        jmethodID *MeasurementDecorator::mids$ = NULL;
        bool MeasurementDecorator::live$ = false;

        jclass MeasurementDecorator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/MeasurementDecorator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1c31b7db2619902] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCovariance_b2eebabce70526d8] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getObservedMeasurement_2198162c3cb7b73f] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MeasurementDecorator::MeasurementDecorator(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1c31b7db2619902, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::linear::RealMatrix MeasurementDecorator::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_b2eebabce70526d8]));
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementDecorator::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_2198162c3cb7b73f]));
        }

        jdouble MeasurementDecorator::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
        }

        ::org::hipparchus::linear::RealVector MeasurementDecorator::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_92d7e8d8d3f1dfcf]));
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
        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data);
        static PyGetSetDef t_MeasurementDecorator__fields_[] = {
          DECLARE_GET_FIELD(t_MeasurementDecorator, covariance),
          DECLARE_GET_FIELD(t_MeasurementDecorator, observedMeasurement),
          DECLARE_GET_FIELD(t_MeasurementDecorator, time),
          DECLARE_GET_FIELD(t_MeasurementDecorator, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MeasurementDecorator__methods_[] = {
          DECLARE_METHOD(t_MeasurementDecorator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getTime, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MeasurementDecorator)[] = {
          { Py_tp_methods, t_MeasurementDecorator__methods_ },
          { Py_tp_init, (void *) t_MeasurementDecorator_init_ },
          { Py_tp_getset, t_MeasurementDecorator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MeasurementDecorator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MeasurementDecorator, t_MeasurementDecorator, MeasurementDecorator);

        void t_MeasurementDecorator::install(PyObject *module)
        {
          installType(&PY_TYPE(MeasurementDecorator), &PY_TYPE_DEF(MeasurementDecorator), module, "MeasurementDecorator", 0);
        }

        void t_MeasurementDecorator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "class_", make_descriptor(MeasurementDecorator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "wrapfn_", make_descriptor(t_MeasurementDecorator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MeasurementDecorator::initializeClass, 1)))
            return NULL;
          return t_MeasurementDecorator::wrap_Object(MeasurementDecorator(((t_MeasurementDecorator *) arg)->object.this$));
        }
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MeasurementDecorator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          MeasurementDecorator object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2))
          {
            INT_CALL(object = MeasurementDecorator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
