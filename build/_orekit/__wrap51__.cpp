#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *SBASPropagatorBuilder::class$ = NULL;
          jmethodID *SBASPropagatorBuilder::mids$ = NULL;
          bool SBASPropagatorBuilder::live$ = false;

          jclass SBASPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bcabaa1c0b83cdfe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;)V");
              mids$[mid_init$_401531036ac71b2b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_186305368444097e] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_build_52115c132377a3e0] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
              mids$[mid_ecef_482b0474ebd9523e] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_eci_482b0474ebd9523e] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mass_fbd3e053e28d0b2c] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mu_fbd3e053e28d0b2c] = env->getMethodID(cls, "mu", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bcabaa1c0b83cdfe, a0.this$)) {}

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_401531036ac71b2b, a0.this$, a1.this$)) {}

          SBASPropagatorBuilder SBASPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_186305368444097e], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_build_52115c132377a3e0]));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_482b0474ebd9523e], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_482b0474ebd9523e], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mass(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_fbd3e053e28d0b2c], a0));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mu(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mu_fbd3e053e28d0b2c], a0));
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
          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self);
          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_SBASPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_SBASPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mass, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mu, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SBASPropagatorBuilder)[] = {
            { Py_tp_methods, t_SBASPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_SBASPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SBASPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SBASPropagatorBuilder, t_SBASPropagatorBuilder, SBASPropagatorBuilder);

          void t_SBASPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(SBASPropagatorBuilder), &PY_TYPE_DEF(SBASPropagatorBuilder), module, "SBASPropagatorBuilder", 0);
          }

          void t_SBASPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "class_", make_descriptor(SBASPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "wrapfn_", make_descriptor(t_SBASPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SBASPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_SBASPropagatorBuilder::wrap_Object(SBASPropagatorBuilder(((t_SBASPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SBASPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0, a1));
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

          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
          }

          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mu(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *LocalizedException::class$ = NULL;
      jmethodID *LocalizedException::mids$ = NULL;
      bool LocalizedException::live$ = false;

      jclass LocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/LocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
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
      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg);
      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self);
      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self);
      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data);
      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data);
      static PyGetSetDef t_LocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedException, parts),
        DECLARE_GET_FIELD(t_LocalizedException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedException__methods_[] = {
        DECLARE_METHOD(t_LocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, getMessage, METH_O),
        DECLARE_METHOD(t_LocalizedException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedException)[] = {
        { Py_tp_methods, t_LocalizedException__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalizedException, t_LocalizedException, LocalizedException);

      void t_LocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedException), &PY_TYPE_DEF(LocalizedException), module, "LocalizedException", 0);
      }

      void t_LocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "class_", make_descriptor(LocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "wrapfn_", make_descriptor(t_LocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedException::initializeClass, 1)))
          return NULL;
        return t_LocalizedException::wrap_Object(LocalizedException(((t_LocalizedException *) arg)->object.this$));
      }
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getMessage(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getMessage", arg);
        return NULL;
      }

      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data)
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
#include "org/orekit/propagation/integration/PythonStateMapper.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonStateMapper::class$ = NULL;
        jmethodID *PythonStateMapper::mids$ = NULL;
        bool PythonStateMapper::live$ = false;

        jclass PythonStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_953cf0ff7e5d2055] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_99fed456829e6a47] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapStateToArray_915c7d1930588394] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonStateMapper::PythonStateMapper(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::StateMapper(env->newObject(initializeClass, &mids$, mid_init$_953cf0ff7e5d2055, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonStateMapper::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self);
        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data);
        static PyGetSetDef t_PythonStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonStateMapper, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonStateMapper)[] = {
          { Py_tp_methods, t_PythonStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonStateMapper_init_ },
          { Py_tp_getset, t_PythonStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::StateMapper),
          NULL
        };

        DEFINE_TYPE(PythonStateMapper, t_PythonStateMapper, PythonStateMapper);

        void t_PythonStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonStateMapper), &PY_TYPE_DEF(PythonStateMapper), module, "PythonStateMapper", 1);
        }

        void t_PythonStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "class_", make_descriptor(PythonStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "wrapfn_", make_descriptor(t_PythonStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonStateMapper::wrap_Object(PythonStateMapper(((t_PythonStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonStateMapper object((jobject) NULL);

          if (!parseArgs(args, "kDKKkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonStateMapper(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args)
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

        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("mapArrayToState", result);
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

        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data)
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
#include "org/orekit/attitudes/CelestialBodyPointed.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *CelestialBodyPointed::class$ = NULL;
      jmethodID *CelestialBodyPointed::mids$ = NULL;
      bool CelestialBodyPointed::live$ = false;

      jclass CelestialBodyPointed::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/CelestialBodyPointed");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3301cfd3f7e199e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CelestialBodyPointed::CelestialBodyPointed(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3301cfd3f7e199e1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::attitudes::FieldAttitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args);

      static PyMethodDef t_CelestialBodyPointed__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyPointed, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, getAttitude, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyPointed)[] = {
        { Py_tp_methods, t_CelestialBodyPointed__methods_ },
        { Py_tp_init, (void *) t_CelestialBodyPointed_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyPointed)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyPointed, t_CelestialBodyPointed, CelestialBodyPointed);

      void t_CelestialBodyPointed::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyPointed), &PY_TYPE_DEF(CelestialBodyPointed), module, "CelestialBodyPointed", 0);
      }

      void t_CelestialBodyPointed::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "class_", make_descriptor(CelestialBodyPointed::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "wrapfn_", make_descriptor(t_CelestialBodyPointed::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyPointed::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyPointed::wrap_Object(CelestialBodyPointed(((t_CelestialBodyPointed *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyPointed::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
        CelestialBodyPointed object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CelestialBodyPointed(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *AlternativeHypothesis::class$ = NULL;
        jmethodID *AlternativeHypothesis::mids$ = NULL;
        bool AlternativeHypothesis::live$ = false;
        AlternativeHypothesis *AlternativeHypothesis::GREATER_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::LESS_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::TWO_SIDED = NULL;

        jclass AlternativeHypothesis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/AlternativeHypothesis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_7a2d6f6e91c16372] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/inference/AlternativeHypothesis;");
            mids$[mid_values_c3f08989bba8bdf7] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/inference/AlternativeHypothesis;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GREATER_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "GREATER_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            LESS_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "LESS_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            TWO_SIDED = new AlternativeHypothesis(env->getStaticObjectField(cls, "TWO_SIDED", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlternativeHypothesis AlternativeHypothesis::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlternativeHypothesis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7a2d6f6e91c16372], a0.this$));
        }

        JArray< AlternativeHypothesis > AlternativeHypothesis::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlternativeHypothesis >(env->callStaticObjectMethod(cls, mids$[mid_values_c3f08989bba8bdf7]));
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
    namespace stat {
      namespace inference {
        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args);
        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type);
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data);
        static PyGetSetDef t_AlternativeHypothesis__fields_[] = {
          DECLARE_GET_FIELD(t_AlternativeHypothesis, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlternativeHypothesis__methods_[] = {
          DECLARE_METHOD(t_AlternativeHypothesis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlternativeHypothesis, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlternativeHypothesis)[] = {
          { Py_tp_methods, t_AlternativeHypothesis__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlternativeHypothesis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlternativeHypothesis)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlternativeHypothesis, t_AlternativeHypothesis, AlternativeHypothesis);
        PyObject *t_AlternativeHypothesis::wrap_Object(const AlternativeHypothesis& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlternativeHypothesis::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlternativeHypothesis::install(PyObject *module)
        {
          installType(&PY_TYPE(AlternativeHypothesis), &PY_TYPE_DEF(AlternativeHypothesis), module, "AlternativeHypothesis", 0);
        }

        void t_AlternativeHypothesis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "class_", make_descriptor(AlternativeHypothesis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "wrapfn_", make_descriptor(t_AlternativeHypothesis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlternativeHypothesis::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "GREATER_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::GREATER_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "LESS_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::LESS_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "TWO_SIDED", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::TWO_SIDED)));
        }

        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlternativeHypothesis::initializeClass, 1)))
            return NULL;
          return t_AlternativeHypothesis::wrap_Object(AlternativeHypothesis(((t_AlternativeHypothesis *) arg)->object.this$));
        }
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlternativeHypothesis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlternativeHypothesis result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::valueOf(a0));
            return t_AlternativeHypothesis::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type)
        {
          JArray< AlternativeHypothesis > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::values());
          return JArray<jobject>(result.this$).wrap(t_AlternativeHypothesis::wrap_jobject);
        }
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/InputStreamEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *InputStreamEncodedMessage::class$ = NULL;
          jmethodID *InputStreamEncodedMessage::mids$ = NULL;
          bool InputStreamEncodedMessage::live$ = false;

          jclass InputStreamEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/InputStreamEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_471a178453aa39ad] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
              mids$[mid_fetchByte_55546ef6a647f39b] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InputStreamEncodedMessage::InputStreamEncodedMessage(const ::java::io::InputStream & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_471a178453aa39ad, a0.this$)) {}
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
          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_InputStreamEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_InputStreamEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InputStreamEncodedMessage, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InputStreamEncodedMessage)[] = {
            { Py_tp_methods, t_InputStreamEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_InputStreamEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InputStreamEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(InputStreamEncodedMessage, t_InputStreamEncodedMessage, InputStreamEncodedMessage);

          void t_InputStreamEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(InputStreamEncodedMessage), &PY_TYPE_DEF(InputStreamEncodedMessage), module, "InputStreamEncodedMessage", 0);
          }

          void t_InputStreamEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "class_", make_descriptor(InputStreamEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "wrapfn_", make_descriptor(t_InputStreamEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InputStreamEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_InputStreamEncodedMessage::wrap_Object(InputStreamEncodedMessage(((t_InputStreamEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InputStreamEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::io::InputStream a0((jobject) NULL);
            InputStreamEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
            {
              INT_CALL(object = InputStreamEncodedMessage(a0));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4B::class$ = NULL;
          jmethodID *SubFrame4B::mids$ = NULL;
          bool SubFrame4B::live$ = false;

          jclass SubFrame4B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReserved03_55546ef6a647f39b] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_55546ef6a647f39b] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_55546ef6a647f39b] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_55546ef6a647f39b] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_55546ef6a647f39b] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_55546ef6a647f39b] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved09_55546ef6a647f39b] = env->getMethodID(cls, "getReserved09", "()I");
              mids$[mid_getReserved10_55546ef6a647f39b] = env->getMethodID(cls, "getReserved10", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4B::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_55546ef6a647f39b]);
          }

          jint SubFrame4B::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_55546ef6a647f39b]);
          }

          jint SubFrame4B::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_55546ef6a647f39b]);
          }

          jint SubFrame4B::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_55546ef6a647f39b]);
          }

          jint SubFrame4B::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_55546ef6a647f39b]);
          }

          jint SubFrame4B::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_55546ef6a647f39b]);
          }

          jint SubFrame4B::getReserved09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved09_55546ef6a647f39b]);
          }

          jint SubFrame4B::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_55546ef6a647f39b]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data);
          static PyGetSetDef t_SubFrame4B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4B, reserved03),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved04),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved05),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved06),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved07),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved08),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved09),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved10),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4B__methods_[] = {
            DECLARE_METHOD(t_SubFrame4B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, getReserved03, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved08, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved09, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved10, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4B)[] = {
            { Py_tp_methods, t_SubFrame4B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4B, t_SubFrame4B, SubFrame4B);

          void t_SubFrame4B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4B), &PY_TYPE_DEF(SubFrame4B), module, "SubFrame4B", 0);
          }

          void t_SubFrame4B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "class_", make_descriptor(SubFrame4B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "wrapfn_", make_descriptor(t_SubFrame4B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4B::initializeClass, 1)))
              return NULL;
            return t_SubFrame4B::wrap_Object(SubFrame4B(((t_SubFrame4B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved03());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved08());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved03());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved08());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved09());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventsLogger.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger::class$ = NULL;
        jmethodID *EventsLogger::mids$ = NULL;
        bool EventsLogger::live$ = false;

        jclass EventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_e62d3bb06d56d7e3] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");
            mids$[mid_monitorDetector_0b41b223640c2799] = env->getMethodID(cls, "monitorDetector", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/EventDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventsLogger::EventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void EventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_a1fa5dae97ea5ed2]);
        }

        ::java::util::List EventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_e62d3bb06d56d7e3]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger::monitorDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_monitorDetector_0b41b223640c2799], a0.this$));
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
        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg);
        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data);
        static PyGetSetDef t_EventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger, loggedEvents),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger__methods_[] = {
          DECLARE_METHOD(t_EventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, getLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, monitorDetector, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger)[] = {
          { Py_tp_methods, t_EventsLogger__methods_ },
          { Py_tp_init, (void *) t_EventsLogger_init_ },
          { Py_tp_getset, t_EventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger, t_EventsLogger, EventsLogger);

        void t_EventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger), &PY_TYPE_DEF(EventsLogger), module, "EventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "LoggedEvent", make_descriptor(&PY_TYPE_DEF(EventsLogger$LoggedEvent)));
        }

        void t_EventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "class_", make_descriptor(EventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "wrapfn_", make_descriptor(t_EventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger::initializeClass, 1)))
            return NULL;
          return t_EventsLogger::wrap_Object(EventsLogger(((t_EventsLogger *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds)
        {
          EventsLogger object((jobject) NULL);

          INT_CALL(object = EventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventsLogger$LoggedEvent));
        }

        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.monitorDetector(a0));
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "monitorDetector", arg);
          return NULL;
        }

        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Add.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Add::class$ = NULL;
        jmethodID *Add::mids$ = NULL;
        bool Add::live$ = false;

        jclass Add::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Add");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Add::Add() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Add::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
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
        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Add_value(t_Add *self, PyObject *args);

        static PyMethodDef t_Add__methods_[] = {
          DECLARE_METHOD(t_Add, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Add)[] = {
          { Py_tp_methods, t_Add__methods_ },
          { Py_tp_init, (void *) t_Add_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Add)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Add, t_Add, Add);

        void t_Add::install(PyObject *module)
        {
          installType(&PY_TYPE(Add), &PY_TYPE_DEF(Add), module, "Add", 0);
        }

        void t_Add::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "class_", make_descriptor(Add::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "wrapfn_", make_descriptor(t_Add::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Add::initializeClass, 1)))
            return NULL;
          return t_Add::wrap_Object(Add(((t_Add *) arg)->object.this$));
        }
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Add::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds)
        {
          Add object((jobject) NULL);

          INT_CALL(object = Add());
          self->object = object;

          return 0;
        }

        static PyObject *t_Add_value(t_Add *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Tuple::class$ = NULL;
      jmethodID *Tuple::mids$ = NULL;
      bool Tuple::live$ = false;

      jclass Tuple::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Tuple");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_abs_c56429b2ce6948e2] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acos_c56429b2ce6948e2] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acosh_c56429b2ce6948e2] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_5c2281aaec2c84e1] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_d28cc2227664dd45] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_asin_c56429b2ce6948e2] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_asinh_c56429b2ce6948e2] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan_c56429b2ce6948e2] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan2_5c2281aaec2c84e1] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_atanh_c56429b2ce6948e2] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cbrt_c56429b2ce6948e2] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ceil_c56429b2ce6948e2] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_5c2281aaec2c84e1] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_d28cc2227664dd45] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_cos_c56429b2ce6948e2] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cosh_c56429b2ce6948e2] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_5c2281aaec2c84e1] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_d28cc2227664dd45] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_c56429b2ce6948e2] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_expm1_c56429b2ce6948e2] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_floor_c56429b2ce6948e2] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getComponent_2afcbc21f4e57ab2] = env->getMethodID(cls, "getComponent", "(I)D");
          mids$[mid_getComponents_25e1757a36c4dde2] = env->getMethodID(cls, "getComponents", "()[D");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_c56429b2ce6948e2] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_5c2281aaec2c84e1] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_4894c3a1eb96c09c] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_e19e77eb669b96b1] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Tuple;[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_fca46aee76121de7] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_e2ad02d65d0fb433] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_043d59e4faab09bd] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_193eeb6173a3d718] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_c1a9b26a65dcc34e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_5532d4ac9f8a4dfe] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_log_c56429b2ce6948e2] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log10_c56429b2ce6948e2] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log1p_c56429b2ce6948e2] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_5c2281aaec2c84e1] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_d28cc2227664dd45] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_74e8dcdcae0f2c70] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_negate_c56429b2ce6948e2] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_newInstance_d28cc2227664dd45] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_5c2281aaec2c84e1] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_d28cc2227664dd45] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_74e8dcdcae0f2c70] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_reciprocal_c56429b2ce6948e2] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_5c2281aaec2c84e1] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_d28cc2227664dd45] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_rint_c56429b2ce6948e2] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_rootN_74e8dcdcae0f2c70] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_scalb_74e8dcdcae0f2c70] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_sign_c56429b2ce6948e2] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sin_c56429b2ce6948e2] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_c56429b2ce6948e2] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_c56429b2ce6948e2] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_5c2281aaec2c84e1] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_d28cc2227664dd45] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_tan_c56429b2ce6948e2] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_tanh_c56429b2ce6948e2] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toDegrees_c56429b2ce6948e2] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toRadians_c56429b2ce6948e2] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ulp_c56429b2ce6948e2] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Tuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Tuple::Tuple(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

      Tuple Tuple::abs() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_abs_c56429b2ce6948e2]));
      }

      Tuple Tuple::acos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acos_c56429b2ce6948e2]));
      }

      Tuple Tuple::acosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acosh_c56429b2ce6948e2]));
      }

      Tuple Tuple::add(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_5c2281aaec2c84e1], a0.this$));
      }

      Tuple Tuple::add(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_d28cc2227664dd45], a0));
      }

      Tuple Tuple::asin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asin_c56429b2ce6948e2]));
      }

      Tuple Tuple::asinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asinh_c56429b2ce6948e2]));
      }

      Tuple Tuple::atan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan_c56429b2ce6948e2]));
      }

      Tuple Tuple::atan2(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan2_5c2281aaec2c84e1], a0.this$));
      }

      Tuple Tuple::atanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atanh_c56429b2ce6948e2]));
      }

      Tuple Tuple::cbrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cbrt_c56429b2ce6948e2]));
      }

      Tuple Tuple::ceil() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ceil_c56429b2ce6948e2]));
      }

      Tuple Tuple::copySign(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_5c2281aaec2c84e1], a0.this$));
      }

      Tuple Tuple::copySign(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_d28cc2227664dd45], a0));
      }

      Tuple Tuple::cos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cos_c56429b2ce6948e2]));
      }

      Tuple Tuple::cosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cosh_c56429b2ce6948e2]));
      }

      Tuple Tuple::divide(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_5c2281aaec2c84e1], a0.this$));
      }

      Tuple Tuple::divide(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_d28cc2227664dd45], a0));
      }

      jboolean Tuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      Tuple Tuple::exp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_exp_c56429b2ce6948e2]));
      }

      Tuple Tuple::expm1() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_expm1_c56429b2ce6948e2]));
      }

      Tuple Tuple::floor() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_floor_c56429b2ce6948e2]));
      }

      jdouble Tuple::getComponent(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getComponent_2afcbc21f4e57ab2], a0);
      }

      JArray< jdouble > Tuple::getComponents() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getComponents_25e1757a36c4dde2]));
      }

      jint Tuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::Field Tuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      Tuple Tuple::getPi() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_getPi_c56429b2ce6948e2]));
      }

      jdouble Tuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
      }

      jint Tuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      Tuple Tuple::hypot(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_hypot_5c2281aaec2c84e1], a0.this$));
      }

      Tuple Tuple::linearCombination(const JArray< jdouble > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_4894c3a1eb96c09c], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const JArray< Tuple > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_e19e77eb669b96b1], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_fca46aee76121de7], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_e2ad02d65d0fb433], a0, a1.this$, a2, a3.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_043d59e4faab09bd], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_193eeb6173a3d718], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5, const Tuple & a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_c1a9b26a65dcc34e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5, jdouble a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_5532d4ac9f8a4dfe], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Tuple Tuple::log() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log_c56429b2ce6948e2]));
      }

      Tuple Tuple::log10() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log10_c56429b2ce6948e2]));
      }

      Tuple Tuple::log1p() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log1p_c56429b2ce6948e2]));
      }

      Tuple Tuple::multiply(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_5c2281aaec2c84e1], a0.this$));
      }

      Tuple Tuple::multiply(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_d28cc2227664dd45], a0));
      }

      Tuple Tuple::multiply(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_74e8dcdcae0f2c70], a0));
      }

      Tuple Tuple::negate() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_negate_c56429b2ce6948e2]));
      }

      Tuple Tuple::newInstance(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_newInstance_d28cc2227664dd45], a0));
      }

      Tuple Tuple::pow(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_5c2281aaec2c84e1], a0.this$));
      }

      Tuple Tuple::pow(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_d28cc2227664dd45], a0));
      }

      Tuple Tuple::pow(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_74e8dcdcae0f2c70], a0));
      }

      Tuple Tuple::reciprocal() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_reciprocal_c56429b2ce6948e2]));
      }

      Tuple Tuple::remainder(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_5c2281aaec2c84e1], a0.this$));
      }

      Tuple Tuple::remainder(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_d28cc2227664dd45], a0));
      }

      Tuple Tuple::rint() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rint_c56429b2ce6948e2]));
      }

      Tuple Tuple::rootN(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rootN_74e8dcdcae0f2c70], a0));
      }

      Tuple Tuple::scalb(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_scalb_74e8dcdcae0f2c70], a0));
      }

      Tuple Tuple::sign() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sign_c56429b2ce6948e2]));
      }

      Tuple Tuple::sin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sin_c56429b2ce6948e2]));
      }

      ::org::hipparchus::util::FieldSinCos Tuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
      }

      Tuple Tuple::sinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sinh_c56429b2ce6948e2]));
      }

      ::org::hipparchus::util::FieldSinhCosh Tuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
      }

      Tuple Tuple::sqrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sqrt_c56429b2ce6948e2]));
      }

      Tuple Tuple::subtract(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_5c2281aaec2c84e1], a0.this$));
      }

      Tuple Tuple::subtract(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_d28cc2227664dd45], a0));
      }

      Tuple Tuple::tan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tan_c56429b2ce6948e2]));
      }

      Tuple Tuple::tanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tanh_c56429b2ce6948e2]));
      }

      Tuple Tuple::toDegrees() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toDegrees_c56429b2ce6948e2]));
      }

      Tuple Tuple::toRadians() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toRadians_c56429b2ce6948e2]));
      }

      Tuple Tuple::ulp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ulp_c56429b2ce6948e2]));
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
      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Tuple_abs(t_Tuple *self);
      static PyObject *t_Tuple_acos(t_Tuple *self);
      static PyObject *t_Tuple_acosh(t_Tuple *self);
      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_asin(t_Tuple *self);
      static PyObject *t_Tuple_asinh(t_Tuple *self);
      static PyObject *t_Tuple_atan(t_Tuple *self);
      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_atanh(t_Tuple *self);
      static PyObject *t_Tuple_cbrt(t_Tuple *self);
      static PyObject *t_Tuple_ceil(t_Tuple *self);
      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_cos(t_Tuple *self);
      static PyObject *t_Tuple_cosh(t_Tuple *self);
      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_exp(t_Tuple *self);
      static PyObject *t_Tuple_expm1(t_Tuple *self);
      static PyObject *t_Tuple_floor(t_Tuple *self);
      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_getComponents(t_Tuple *self);
      static PyObject *t_Tuple_getDimension(t_Tuple *self);
      static PyObject *t_Tuple_getField(t_Tuple *self);
      static PyObject *t_Tuple_getPi(t_Tuple *self);
      static PyObject *t_Tuple_getReal(t_Tuple *self);
      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_log(t_Tuple *self);
      static PyObject *t_Tuple_log10(t_Tuple *self);
      static PyObject *t_Tuple_log1p(t_Tuple *self);
      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_negate(t_Tuple *self);
      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_reciprocal(t_Tuple *self);
      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_rint(t_Tuple *self);
      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_sign(t_Tuple *self);
      static PyObject *t_Tuple_sin(t_Tuple *self);
      static PyObject *t_Tuple_sinCos(t_Tuple *self);
      static PyObject *t_Tuple_sinh(t_Tuple *self);
      static PyObject *t_Tuple_sinhCosh(t_Tuple *self);
      static PyObject *t_Tuple_sqrt(t_Tuple *self);
      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_tan(t_Tuple *self);
      static PyObject *t_Tuple_tanh(t_Tuple *self);
      static PyObject *t_Tuple_toDegrees(t_Tuple *self);
      static PyObject *t_Tuple_toRadians(t_Tuple *self);
      static PyObject *t_Tuple_ulp(t_Tuple *self);
      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data);
      static PyGetSetDef t_Tuple__fields_[] = {
        DECLARE_GET_FIELD(t_Tuple, components),
        DECLARE_GET_FIELD(t_Tuple, dimension),
        DECLARE_GET_FIELD(t_Tuple, field),
        DECLARE_GET_FIELD(t_Tuple, pi),
        DECLARE_GET_FIELD(t_Tuple, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Tuple__methods_[] = {
        DECLARE_METHOD(t_Tuple, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, abs, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, add, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, asin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan2, METH_O),
        DECLARE_METHOD(t_Tuple, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, cos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, divide, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, equals, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, exp, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, floor, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getComponent, METH_O),
        DECLARE_METHOD(t_Tuple, getComponents, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getField, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, hypot, METH_O),
        DECLARE_METHOD(t_Tuple, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, log, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log10, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, negate, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, newInstance, METH_O),
        DECLARE_METHOD(t_Tuple, pow, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, rint, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, rootN, METH_O),
        DECLARE_METHOD(t_Tuple, scalb, METH_O),
        DECLARE_METHOD(t_Tuple, sign, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, tan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Tuple)[] = {
        { Py_tp_methods, t_Tuple__methods_ },
        { Py_tp_init, (void *) t_Tuple_init_ },
        { Py_tp_getset, t_Tuple__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Tuple)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Tuple, t_Tuple, Tuple);

      void t_Tuple::install(PyObject *module)
      {
        installType(&PY_TYPE(Tuple), &PY_TYPE_DEF(Tuple), module, "Tuple", 0);
      }

      void t_Tuple::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "class_", make_descriptor(Tuple::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "wrapfn_", make_descriptor(t_Tuple::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Tuple::initializeClass, 1)))
          return NULL;
        return t_Tuple::wrap_Object(Tuple(((t_Tuple *) arg)->object.this$));
      }
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Tuple::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        Tuple object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = Tuple(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Tuple_abs(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Tuple_asin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_asinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Tuple_atanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cbrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ceil(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Tuple_cos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Tuple_exp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_expm1(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_floor(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getComponent(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getComponent", arg);
        return NULL;
      }

      static PyObject *t_Tuple_getComponents(t_Tuple *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getComponents());
        return result.wrap();
      }

      static PyObject *t_Tuple_getDimension(t_Tuple *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Tuple_getField(t_Tuple *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_getPi(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getReal(t_Tuple *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            JArray< Tuple > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple a6((jobject) NULL);
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            jdouble a6;
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Tuple_log(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log10(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log1p(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Tuple_negate(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg)
      {
        jdouble a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Tuple_reciprocal(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Tuple_rint(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Tuple_sign(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinCos(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinhCosh(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sqrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Tuple_tan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_tanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toDegrees(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toRadians(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ulp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getComponents());
        return value.wrap();
      }

      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data)
      {
        Tuple value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Tuple::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUp::class$ = NULL;
          jmethodID *WindUp::mids$ = NULL;
          bool WindUp::live$ = false;

          jclass WindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_emitterToInert_3b9f748b89094cc6] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_3b9f748b89094cc6] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
        namespace gnss {
          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args);
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data);
          static PyGetSetDef t_WindUp__fields_[] = {
            DECLARE_GET_FIELD(t_WindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WindUp__methods_[] = {
            DECLARE_METHOD(t_WindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUp)[] = {
            { Py_tp_methods, t_WindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_WindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(WindUp, t_WindUp, WindUp);
          PyObject *t_WindUp::wrap_Object(const WindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUp), &PY_TYPE_DEF(WindUp), module, "WindUp", 0);
          }

          void t_WindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "class_", make_descriptor(WindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "wrapfn_", make_descriptor(t_WindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUp::initializeClass, 1)))
              return NULL;
            return t_WindUp::wrap_Object(WindUp(((t_WindUp *) arg)->object.this$));
          }
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data)
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
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *MassDepletionDelay::class$ = NULL;
          jmethodID *MassDepletionDelay::mids$ = NULL;
          bool MassDepletionDelay::live$ = false;
          ::java::lang::String *MassDepletionDelay::PREFIX$ = NULL;

          jclass MassDepletionDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MassDepletionDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3e8f73610a335c1b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;)V");
              mids$[mid_combinedDerivatives_f7e02f1d7093fbbb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREFIX$ = new ::java::lang::String(env->getStaticObjectField(cls, "PREFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MassDepletionDelay::MassDepletionDelay(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::forces::maneuvers::Maneuver & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e8f73610a335c1b, a0.this$, a1, a2.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives MassDepletionDelay::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_f7e02f1d7093fbbb], a0.this$));
          }

          jint MassDepletionDelay::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
          }

          ::java::lang::String MassDepletionDelay::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          void MassDepletionDelay::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
    namespace forces {
      namespace maneuvers {
        namespace jacobians {
          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg);
          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args);
          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data);
          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data);
          static PyGetSetDef t_MassDepletionDelay__fields_[] = {
            DECLARE_GET_FIELD(t_MassDepletionDelay, dimension),
            DECLARE_GET_FIELD(t_MassDepletionDelay, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MassDepletionDelay__methods_[] = {
            DECLARE_METHOD(t_MassDepletionDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_MassDepletionDelay, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, getName, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MassDepletionDelay)[] = {
            { Py_tp_methods, t_MassDepletionDelay__methods_ },
            { Py_tp_init, (void *) t_MassDepletionDelay_init_ },
            { Py_tp_getset, t_MassDepletionDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MassDepletionDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MassDepletionDelay, t_MassDepletionDelay, MassDepletionDelay);

          void t_MassDepletionDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(MassDepletionDelay), &PY_TYPE_DEF(MassDepletionDelay), module, "MassDepletionDelay", 0);
          }

          void t_MassDepletionDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "class_", make_descriptor(MassDepletionDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "wrapfn_", make_descriptor(t_MassDepletionDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "boxfn_", make_descriptor(boxObject));
            env->getClass(MassDepletionDelay::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "PREFIX", make_descriptor(j2p(*MassDepletionDelay::PREFIX$)));
          }

          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MassDepletionDelay::initializeClass, 1)))
              return NULL;
            return t_MassDepletionDelay::wrap_Object(MassDepletionDelay(((t_MassDepletionDelay *) arg)->object.this$));
          }
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MassDepletionDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean a1;
            ::org::orekit::forces::maneuvers::Maneuver a2((jobject) NULL);
            MassDepletionDelay object((jobject) NULL);

            if (!parseArgs(args, "sZk", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MassDepletionDelay(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args)
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

          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CenterListConsumer::class$ = NULL;
            jmethodID *ParseToken$CenterListConsumer::mids$ = NULL;
            bool ParseToken$CenterListConsumer::live$ = false;

            jclass ParseToken$CenterListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_0e7c3032c7c93ed3] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_0e7c3032c7c93ed3], a0.this$);
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
            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CenterListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CenterListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CenterListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CenterListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CenterListConsumer, t_ParseToken$CenterListConsumer, ParseToken$CenterListConsumer);

            void t_ParseToken$CenterListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CenterListConsumer), &PY_TYPE_DEF(ParseToken$CenterListConsumer), module, "ParseToken$CenterListConsumer", 0);
            }

            void t_ParseToken$CenterListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "class_", make_descriptor(ParseToken$CenterListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "wrapfn_", make_descriptor(t_ParseToken$CenterListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CenterListConsumer::wrap_Object(ParseToken$CenterListConsumer(((t_ParseToken$CenterListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/attitudes/PythonAttitudeProviderModifier.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeProviderModifier::class$ = NULL;
      jmethodID *PythonAttitudeProviderModifier::mids$ = NULL;
      bool PythonAttitudeProviderModifier::live$ = false;

      jclass PythonAttitudeProviderModifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeProviderModifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getUnderlyingAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProviderModifier::PythonAttitudeProviderModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonAttitudeProviderModifier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAttitudeProviderModifier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAttitudeProviderModifier::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonAttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeProviderModifier_init_(t_PythonAttitudeProviderModifier *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeProviderModifier_finalize(t_PythonAttitudeProviderModifier *self);
      static PyObject *t_PythonAttitudeProviderModifier_pythonExtension(t_PythonAttitudeProviderModifier *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAttitudeProviderModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeProviderModifier_get__self(t_PythonAttitudeProviderModifier *self, void *data);
      static PyGetSetDef t_PythonAttitudeProviderModifier__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeProviderModifier, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeProviderModifier__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeProviderModifier)[] = {
        { Py_tp_methods, t_PythonAttitudeProviderModifier__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeProviderModifier_init_ },
        { Py_tp_getset, t_PythonAttitudeProviderModifier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeProviderModifier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeProviderModifier, t_PythonAttitudeProviderModifier, PythonAttitudeProviderModifier);

      void t_PythonAttitudeProviderModifier::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeProviderModifier), &PY_TYPE_DEF(PythonAttitudeProviderModifier), module, "PythonAttitudeProviderModifier", 1);
      }

      void t_PythonAttitudeProviderModifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "class_", make_descriptor(PythonAttitudeProviderModifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "wrapfn_", make_descriptor(t_PythonAttitudeProviderModifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeProviderModifier::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude1 },
          { "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeProviderModifier_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonAttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeProviderModifier::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeProviderModifier::wrap_Object(PythonAttitudeProviderModifier(((t_PythonAttitudeProviderModifier *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeProviderModifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeProviderModifier_init_(t_PythonAttitudeProviderModifier *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeProviderModifier object((jobject) NULL);

        INT_CALL(object = PythonAttitudeProviderModifier());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeProviderModifier_finalize(t_PythonAttitudeProviderModifier *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeProviderModifier_pythonExtension(t_PythonAttitudeProviderModifier *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUnderlyingAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getUnderlyingAttitudeProvider", result);
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

      static void JNICALL t_PythonAttitudeProviderModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeProviderModifier_get__self(t_PythonAttitudeProviderModifier *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedDoubleArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedDoubleArrayConsumer::mids$ = NULL;
            bool ParseToken$IndexedDoubleArrayConsumer::live$ = false;

            jclass ParseToken$IndexedDoubleArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_75061e5f5bbace93] = env->getMethodID(cls, "accept", "(I[D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleArrayConsumer::accept(jint a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_75061e5f5bbace93], a0, a1.this$);
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
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_accept(t_ParseToken$IndexedDoubleArrayConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedDoubleArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedDoubleArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedDoubleArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedDoubleArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedDoubleArrayConsumer, t_ParseToken$IndexedDoubleArrayConsumer, ParseToken$IndexedDoubleArrayConsumer);

            void t_ParseToken$IndexedDoubleArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), &PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer), module, "ParseToken$IndexedDoubleArrayConsumer", 0);
            }

            void t_ParseToken$IndexedDoubleArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "class_", make_descriptor(ParseToken$IndexedDoubleArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedDoubleArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedDoubleArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedDoubleArrayConsumer::wrap_Object(ParseToken$IndexedDoubleArrayConsumer(((t_ParseToken$IndexedDoubleArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedDoubleArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_accept(t_ParseToken$IndexedDoubleArrayConsumer *self, PyObject *args)
            {
              jint a0;
              JArray< jdouble > a1((jobject) NULL);

              if (!parseArgs(args, "I[D", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
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
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvider::class$ = NULL;
      jmethodID *DataProvider::mids$ = NULL;
      bool DataProvider::live$ = false;

      jclass DataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvider");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DataProvider__methods_[] = {
        DECLARE_METHOD(t_DataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvider, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvider)[] = {
        { Py_tp_methods, t_DataProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvider, t_DataProvider, DataProvider);

      void t_DataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvider), &PY_TYPE_DEF(DataProvider), module, "DataProvider", 0);
      }

      void t_DataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "class_", make_descriptor(DataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "wrapfn_", make_descriptor(t_DataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvider::initializeClass, 1)))
          return NULL;
        return t_DataProvider::wrap_Object(DataProvider(((t_DataProvider *) arg)->object.this$));
      }
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonSmoothFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonSmoothFieldOfView::class$ = NULL;
        jmethodID *PythonSmoothFieldOfView::mids$ = NULL;
        bool PythonSmoothFieldOfView::live$ = false;

        jclass PythonSmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonSmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4fbea8fa1cddeb2d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_directionAt_498f52cd8e5a7072] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_offsetFromBoundary_927580832e9083f9] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_f21507e4850a184e] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSmoothFieldOfView::PythonSmoothFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_4fbea8fa1cddeb2d, a0.this$, a1.this$, a2)) {}

        void PythonSmoothFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonSmoothFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonSmoothFieldOfView::pythonExtension(jlong a0) const
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self);
        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data);
        static PyGetSetDef t_PythonSmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSmoothFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonSmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSmoothFieldOfView)[] = {
          { Py_tp_methods, t_PythonSmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonSmoothFieldOfView_init_ },
          { Py_tp_getset, t_PythonSmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(PythonSmoothFieldOfView, t_PythonSmoothFieldOfView, PythonSmoothFieldOfView);

        void t_PythonSmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSmoothFieldOfView), &PY_TYPE_DEF(PythonSmoothFieldOfView), module, "PythonSmoothFieldOfView", 1);
        }

        void t_PythonSmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "class_", make_descriptor(PythonSmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "wrapfn_", make_descriptor(t_PythonSmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSmoothFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_directionAt0 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonSmoothFieldOfView_offsetFromBoundary1 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_projectToBoundary2 },
            { "pythonDecRef", "()V", (void *) t_PythonSmoothFieldOfView_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonSmoothFieldOfView::wrap_Object(PythonSmoothFieldOfView(((t_PythonSmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          PythonSmoothFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonSmoothFieldOfView(a0, a1, a2));
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

        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "directionAt", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("directionAt", result);
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

        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data)
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
#include "org/hipparchus/distribution/continuous/NakagamiDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NakagamiDistribution::class$ = NULL;
        jmethodID *NakagamiDistribution::mids$ = NULL;
        bool NakagamiDistribution::live$ = false;

        jclass NakagamiDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NakagamiDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_b74f83833fdad017] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble NakagamiDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble NakagamiDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble NakagamiDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble NakagamiDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble NakagamiDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        jdouble NakagamiDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_b74f83833fdad017]);
        }

        jdouble NakagamiDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble NakagamiDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jboolean NakagamiDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
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
        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data);
        static PyGetSetDef t_NakagamiDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NakagamiDistribution, scale),
          DECLARE_GET_FIELD(t_NakagamiDistribution, shape),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NakagamiDistribution__methods_[] = {
          DECLARE_METHOD(t_NakagamiDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NakagamiDistribution)[] = {
          { Py_tp_methods, t_NakagamiDistribution__methods_ },
          { Py_tp_init, (void *) t_NakagamiDistribution_init_ },
          { Py_tp_getset, t_NakagamiDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NakagamiDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NakagamiDistribution, t_NakagamiDistribution, NakagamiDistribution);

        void t_NakagamiDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NakagamiDistribution), &PY_TYPE_DEF(NakagamiDistribution), module, "NakagamiDistribution", 0);
        }

        void t_NakagamiDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "class_", make_descriptor(NakagamiDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "wrapfn_", make_descriptor(t_NakagamiDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NakagamiDistribution::initializeClass, 1)))
            return NULL;
          return t_NakagamiDistribution::wrap_Object(NakagamiDistribution(((t_NakagamiDistribution *) arg)->object.this$));
        }
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NakagamiDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1));
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
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1, a2));
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

        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data)
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
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinates::class$ = NULL;
      jmethodID *AbsolutePVCoordinates::mids$ = NULL;
      bool AbsolutePVCoordinates::live$ = false;

      jclass AbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_800c3dd335c0380a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_fd2b0750660b1520] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_72cc8b5e799f1af2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_cf7eb6bf40ec2784] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_863f1b02c8177428] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_ea4c48813d74fdbb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_da876b03b47aa63e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_d540dd032c580460] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_3e48dcefd2485625] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_57f438b019fb3492] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_03c7a0bca588a4f5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_982d534f80d70918] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_e7e789aaa661e1b8] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_8a41319e47f3bd7c] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_800c3dd335c0380a, a0.this$, a1.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const AbsolutePVCoordinates & a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_fd2b0750660b1520, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_72cc8b5e799f1af2, a0.this$, a1, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_cf7eb6bf40ec2784, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_863f1b02c8177428, a0.this$, a1.this$, a2.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ea4c48813d74fdbb, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_da876b03b47aa63e, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d540dd032c580460, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3e48dcefd2485625, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      AbsolutePVCoordinates::AbsolutePVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const AbsolutePVCoordinates & a2, jdouble a3, const AbsolutePVCoordinates & a4, jdouble a5, const AbsolutePVCoordinates & a6, jdouble a7, const AbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_57f438b019fb3492, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::frames::Frame AbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_136cc8ba23b21c29]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_03c7a0bca588a4f5], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_982d534f80d70918], a0.this$));
      }

      AbsolutePVCoordinates AbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_e7e789aaa661e1b8], a0));
      }

      ::org::orekit::utils::PVCoordinatesProvider AbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_8a41319e47f3bd7c]));
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
      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self);
      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data);
      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinates, pVCoordinates),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinates, toTaylorProvider, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinates, t_AbsolutePVCoordinates, AbsolutePVCoordinates);

      void t_AbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinates), &PY_TYPE_DEF(AbsolutePVCoordinates), module, "AbsolutePVCoordinates", 0);
      }

      void t_AbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "class_", make_descriptor(AbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "wrapfn_", make_descriptor(t_AbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinates::wrap_Object(AbsolutePVCoordinates(((t_AbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsolutePVCoordinates_init_(t_AbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbsolutePVCoordinates a1((jobject) NULL);
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsolutePVCoordinates a2((jobject) NULL);
            jdouble a3;
            AbsolutePVCoordinates a4((jobject) NULL);
            jdouble a5;
            AbsolutePVCoordinates a6((jobject) NULL);
            jdouble a7;
            AbsolutePVCoordinates a8((jobject) NULL);
            AbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, AbsolutePVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = AbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_AbsolutePVCoordinates_getFrame(t_AbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinates_getPVCoordinates(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
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
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AbsolutePVCoordinates_getPosition(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_shiftedBy(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsolutePVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_toTaylorProvider(t_AbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toTaylorProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbsolutePVCoordinates), (PyObject *) self, "toTaylorProvider", args, 2);
      }

      static PyObject *t_AbsolutePVCoordinates_get__frame(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinates_get__pVCoordinates(t_AbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator::mids$ = NULL;
        bool AbstractIntegratedPropagator::live$ = false;

        jclass AbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_687860a192ef3b84] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_e13564f833403504] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_55546ef6a647f39b] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_55546ef6a647f39b] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_5df44e253e7e7782] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagationType_c479da51fc09a224] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_9ab94ac1dc23b105] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_4f0008999861ca31] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_propagate_6845ec704c846b03] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_8ba9fe7a847cecad] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setResetAtEnd_fcb96c98de6fad04] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_createMapper_74f07e2c0845997b] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_8e0da39ae64099e8] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpEventDetector_2b05d9d8da210ff9] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_setUpStmAndJacobianGenerators_a1fa5dae97ea5ed2] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");
            mids$[mid_setUpUserEventDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");
            mids$[mid_getInitialIntegrationState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_beforeIntegration_2d7f9a496c7e9781] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_afterIntegration_a1fa5dae97ea5ed2] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_initMapper_a1fa5dae97ea5ed2] = env->getMethodID(cls, "initMapper", "()V");
            mids$[mid_setOrbitType_2fa1f3b8966f0286] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_778d09854443b806] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_getIntegrator_6e08fde180cf79f8] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_687860a192ef3b84], a0.this$);
        }

        void AbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_e13564f833403504], a0.this$);
        }

        void AbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2]);
        }

        ::java::util::List AbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_e62d3bb06d56d7e3]));
        }

        jint AbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_55546ef6a647f39b]);
        }

        jint AbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_55546ef6a647f39b]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_5df44e253e7e7782]));
        }

        ::java::util::Collection AbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cb666ea1a15f5210]));
        }

        ::java::lang::String AbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_1c1fa1e935d6cdcf]));
        }

        JArray< ::java::lang::String > AbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f94e41879ab7062]));
        }

        jdouble AbstractIntegratedPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::propagation::PropagationType AbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_c479da51fc09a224]));
        }

        jboolean AbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_9ab94ac1dc23b105]);
        }

        jboolean AbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75], a0.this$);
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_4f0008999861ca31], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_6845ec704c846b03], a0.this$, a1.this$));
        }

        void AbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
        }

        void AbstractIntegratedPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_8ba9fe7a847cecad], a0);
        }

        void AbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_fcb96c98de6fad04], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_AbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, resetAtEnd),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator, t_AbstractIntegratedPropagator, AbstractIntegratedPropagator);

        void t_AbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator), &PY_TYPE_DEF(AbstractIntegratedPropagator), module, "AbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_AbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "class_", make_descriptor(AbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator::wrap_Object(AbstractIntegratedPropagator(((t_AbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::AdditionalDerivativesProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::integration::AdditionalDerivativesProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::integration::PY_TYPE(AdditionalDerivativesProvider));
        }

        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.propagate(a0, a1));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/File.h"
#include "java/io/Serializable.h"
#include "java/io/FileFilter.h"
#include "java/io/File.h"
#include "java/io/FilenameFilter.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *File::class$ = NULL;
    jmethodID *File::mids$ = NULL;
    bool File::live$ = false;
    ::java::lang::String *File::pathSeparator = NULL;
    jchar File::pathSeparatorChar = (jchar) 0;
    ::java::lang::String *File::separator = NULL;
    jchar File::separatorChar = (jchar) 0;

    jclass File::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/File");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_6e63b60ae073cb68] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_canExecute_9ab94ac1dc23b105] = env->getMethodID(cls, "canExecute", "()Z");
        mids$[mid_canRead_9ab94ac1dc23b105] = env->getMethodID(cls, "canRead", "()Z");
        mids$[mid_canWrite_9ab94ac1dc23b105] = env->getMethodID(cls, "canWrite", "()Z");
        mids$[mid_compareTo_d28517c799a232a1] = env->getMethodID(cls, "compareTo", "(Ljava/io/File;)I");
        mids$[mid_createNewFile_9ab94ac1dc23b105] = env->getMethodID(cls, "createNewFile", "()Z");
        mids$[mid_createTempFile_4b334f2b7c20f1fa] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;");
        mids$[mid_createTempFile_17a9a3662a3a1e80] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;");
        mids$[mid_delete_9ab94ac1dc23b105] = env->getMethodID(cls, "delete", "()Z");
        mids$[mid_deleteOnExit_a1fa5dae97ea5ed2] = env->getMethodID(cls, "deleteOnExit", "()V");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_exists_9ab94ac1dc23b105] = env->getMethodID(cls, "exists", "()Z");
        mids$[mid_getAbsoluteFile_dfe439e69c3f2d1a] = env->getMethodID(cls, "getAbsoluteFile", "()Ljava/io/File;");
        mids$[mid_getAbsolutePath_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAbsolutePath", "()Ljava/lang/String;");
        mids$[mid_getCanonicalFile_dfe439e69c3f2d1a] = env->getMethodID(cls, "getCanonicalFile", "()Ljava/io/File;");
        mids$[mid_getCanonicalPath_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCanonicalPath", "()Ljava/lang/String;");
        mids$[mid_getFreeSpace_6c0ce7e438e5ded4] = env->getMethodID(cls, "getFreeSpace", "()J");
        mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getParent", "()Ljava/lang/String;");
        mids$[mid_getParentFile_dfe439e69c3f2d1a] = env->getMethodID(cls, "getParentFile", "()Ljava/io/File;");
        mids$[mid_getPath_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getTotalSpace_6c0ce7e438e5ded4] = env->getMethodID(cls, "getTotalSpace", "()J");
        mids$[mid_getUsableSpace_6c0ce7e438e5ded4] = env->getMethodID(cls, "getUsableSpace", "()J");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isAbsolute_9ab94ac1dc23b105] = env->getMethodID(cls, "isAbsolute", "()Z");
        mids$[mid_isDirectory_9ab94ac1dc23b105] = env->getMethodID(cls, "isDirectory", "()Z");
        mids$[mid_isFile_9ab94ac1dc23b105] = env->getMethodID(cls, "isFile", "()Z");
        mids$[mid_isHidden_9ab94ac1dc23b105] = env->getMethodID(cls, "isHidden", "()Z");
        mids$[mid_lastModified_6c0ce7e438e5ded4] = env->getMethodID(cls, "lastModified", "()J");
        mids$[mid_length_6c0ce7e438e5ded4] = env->getMethodID(cls, "length", "()J");
        mids$[mid_list_0f94e41879ab7062] = env->getMethodID(cls, "list", "()[Ljava/lang/String;");
        mids$[mid_list_854db0cab68c4b9e] = env->getMethodID(cls, "list", "(Ljava/io/FilenameFilter;)[Ljava/lang/String;");
        mids$[mid_listFiles_bb33ba2b3bbb5885] = env->getMethodID(cls, "listFiles", "()[Ljava/io/File;");
        mids$[mid_listFiles_170a82fdecc6cabb] = env->getMethodID(cls, "listFiles", "(Ljava/io/FileFilter;)[Ljava/io/File;");
        mids$[mid_listFiles_55793f588f94a98c] = env->getMethodID(cls, "listFiles", "(Ljava/io/FilenameFilter;)[Ljava/io/File;");
        mids$[mid_listRoots_bb33ba2b3bbb5885] = env->getStaticMethodID(cls, "listRoots", "()[Ljava/io/File;");
        mids$[mid_mkdir_9ab94ac1dc23b105] = env->getMethodID(cls, "mkdir", "()Z");
        mids$[mid_mkdirs_9ab94ac1dc23b105] = env->getMethodID(cls, "mkdirs", "()Z");
        mids$[mid_renameTo_a49c91b14b47fa95] = env->getMethodID(cls, "renameTo", "(Ljava/io/File;)Z");
        mids$[mid_setExecutable_52d2d2523d94d978] = env->getMethodID(cls, "setExecutable", "(Z)Z");
        mids$[mid_setExecutable_9409adb0789a48aa] = env->getMethodID(cls, "setExecutable", "(ZZ)Z");
        mids$[mid_setLastModified_ba9ecb578b8b76e7] = env->getMethodID(cls, "setLastModified", "(J)Z");
        mids$[mid_setReadOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "setReadOnly", "()Z");
        mids$[mid_setReadable_52d2d2523d94d978] = env->getMethodID(cls, "setReadable", "(Z)Z");
        mids$[mid_setReadable_9409adb0789a48aa] = env->getMethodID(cls, "setReadable", "(ZZ)Z");
        mids$[mid_setWritable_52d2d2523d94d978] = env->getMethodID(cls, "setWritable", "(Z)Z");
        mids$[mid_setWritable_9409adb0789a48aa] = env->getMethodID(cls, "setWritable", "(ZZ)Z");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toURL_a6459b78443cf7d6] = env->getMethodID(cls, "toURL", "()Ljava/net/URL;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        pathSeparator = new ::java::lang::String(env->getStaticObjectField(cls, "pathSeparator", "Ljava/lang/String;"));
        pathSeparatorChar = env->getStaticCharField(cls, "pathSeparatorChar");
        separator = new ::java::lang::String(env->getStaticObjectField(cls, "separator", "Ljava/lang/String;"));
        separatorChar = env->getStaticCharField(cls, "separatorChar");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    File::File(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    File::File(const File & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e63b60ae073cb68, a0.this$, a1.this$)) {}

    File::File(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

    jboolean File::canExecute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canExecute_9ab94ac1dc23b105]);
    }

    jboolean File::canRead() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_9ab94ac1dc23b105]);
    }

    jboolean File::canWrite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canWrite_9ab94ac1dc23b105]);
    }

    jint File::compareTo(const File & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_d28517c799a232a1], a0.this$);
    }

    jboolean File::createNewFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_createNewFile_9ab94ac1dc23b105]);
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_4b334f2b7c20f1fa], a0.this$, a1.this$));
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const File & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_17a9a3662a3a1e80], a0.this$, a1.this$, a2.this$));
    }

    jboolean File::delete$() const
    {
      return env->callBooleanMethod(this$, mids$[mid_delete_9ab94ac1dc23b105]);
    }

    void File::deleteOnExit() const
    {
      env->callVoidMethod(this$, mids$[mid_deleteOnExit_a1fa5dae97ea5ed2]);
    }

    jboolean File::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean File::exists() const
    {
      return env->callBooleanMethod(this$, mids$[mid_exists_9ab94ac1dc23b105]);
    }

    File File::getAbsoluteFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getAbsoluteFile_dfe439e69c3f2d1a]));
    }

    ::java::lang::String File::getAbsolutePath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAbsolutePath_1c1fa1e935d6cdcf]));
    }

    File File::getCanonicalFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getCanonicalFile_dfe439e69c3f2d1a]));
    }

    ::java::lang::String File::getCanonicalPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalPath_1c1fa1e935d6cdcf]));
    }

    jlong File::getFreeSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getFreeSpace_6c0ce7e438e5ded4]);
    }

    ::java::lang::String File::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String File::getParent() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParent_1c1fa1e935d6cdcf]));
    }

    File File::getParentFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getParentFile_dfe439e69c3f2d1a]));
    }

    ::java::lang::String File::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_1c1fa1e935d6cdcf]));
    }

    jlong File::getTotalSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getTotalSpace_6c0ce7e438e5ded4]);
    }

    jlong File::getUsableSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getUsableSpace_6c0ce7e438e5ded4]);
    }

    jint File::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean File::isAbsolute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAbsolute_9ab94ac1dc23b105]);
    }

    jboolean File::isDirectory() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDirectory_9ab94ac1dc23b105]);
    }

    jboolean File::isFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFile_9ab94ac1dc23b105]);
    }

    jboolean File::isHidden() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isHidden_9ab94ac1dc23b105]);
    }

    jlong File::lastModified() const
    {
      return env->callLongMethod(this$, mids$[mid_lastModified_6c0ce7e438e5ded4]);
    }

    jlong File::length() const
    {
      return env->callLongMethod(this$, mids$[mid_length_6c0ce7e438e5ded4]);
    }

    JArray< ::java::lang::String > File::list() const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_0f94e41879ab7062]));
    }

    JArray< ::java::lang::String > File::list(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_854db0cab68c4b9e], a0.this$));
    }

    JArray< File > File::listFiles() const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_bb33ba2b3bbb5885]));
    }

    JArray< File > File::listFiles(const ::java::io::FileFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_170a82fdecc6cabb], a0.this$));
    }

    JArray< File > File::listFiles(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_55793f588f94a98c], a0.this$));
    }

    JArray< File > File::listRoots()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< File >(env->callStaticObjectMethod(cls, mids$[mid_listRoots_bb33ba2b3bbb5885]));
    }

    jboolean File::mkdir() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdir_9ab94ac1dc23b105]);
    }

    jboolean File::mkdirs() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdirs_9ab94ac1dc23b105]);
    }

    jboolean File::renameTo(const File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_renameTo_a49c91b14b47fa95], a0.this$);
    }

    jboolean File::setExecutable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_52d2d2523d94d978], a0);
    }

    jboolean File::setExecutable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_9409adb0789a48aa], a0, a1);
    }

    jboolean File::setLastModified(jlong a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setLastModified_ba9ecb578b8b76e7], a0);
    }

    jboolean File::setReadOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadOnly_9ab94ac1dc23b105]);
    }

    jboolean File::setReadable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_52d2d2523d94d978], a0);
    }

    jboolean File::setReadable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_9409adb0789a48aa], a0, a1);
    }

    jboolean File::setWritable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_52d2d2523d94d978], a0);
    }

    jboolean File::setWritable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_9409adb0789a48aa], a0, a1);
    }

    ::java::lang::String File::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::net::URL File::toURL() const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_toURL_a6459b78443cf7d6]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg);
    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds);
    static PyObject *t_File_canExecute(t_File *self);
    static PyObject *t_File_canRead(t_File *self);
    static PyObject *t_File_canWrite(t_File *self);
    static PyObject *t_File_compareTo(t_File *self, PyObject *arg);
    static PyObject *t_File_createNewFile(t_File *self);
    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args);
    static PyObject *t_File_delete(t_File *self);
    static PyObject *t_File_deleteOnExit(t_File *self);
    static PyObject *t_File_equals(t_File *self, PyObject *args);
    static PyObject *t_File_exists(t_File *self);
    static PyObject *t_File_getAbsoluteFile(t_File *self);
    static PyObject *t_File_getAbsolutePath(t_File *self);
    static PyObject *t_File_getCanonicalFile(t_File *self);
    static PyObject *t_File_getCanonicalPath(t_File *self);
    static PyObject *t_File_getFreeSpace(t_File *self);
    static PyObject *t_File_getName(t_File *self);
    static PyObject *t_File_getParent(t_File *self);
    static PyObject *t_File_getParentFile(t_File *self);
    static PyObject *t_File_getPath(t_File *self);
    static PyObject *t_File_getTotalSpace(t_File *self);
    static PyObject *t_File_getUsableSpace(t_File *self);
    static PyObject *t_File_hashCode(t_File *self, PyObject *args);
    static PyObject *t_File_isAbsolute(t_File *self);
    static PyObject *t_File_isDirectory(t_File *self);
    static PyObject *t_File_isFile(t_File *self);
    static PyObject *t_File_isHidden(t_File *self);
    static PyObject *t_File_lastModified(t_File *self);
    static PyObject *t_File_length(t_File *self);
    static PyObject *t_File_list(t_File *self, PyObject *args);
    static PyObject *t_File_listFiles(t_File *self, PyObject *args);
    static PyObject *t_File_listRoots(PyTypeObject *type);
    static PyObject *t_File_mkdir(t_File *self);
    static PyObject *t_File_mkdirs(t_File *self);
    static PyObject *t_File_renameTo(t_File *self, PyObject *arg);
    static PyObject *t_File_setExecutable(t_File *self, PyObject *args);
    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg);
    static PyObject *t_File_setReadOnly(t_File *self);
    static PyObject *t_File_setReadable(t_File *self, PyObject *args);
    static PyObject *t_File_setWritable(t_File *self, PyObject *args);
    static PyObject *t_File_toString(t_File *self, PyObject *args);
    static PyObject *t_File_toURL(t_File *self);
    static PyObject *t_File_get__absolute(t_File *self, void *data);
    static PyObject *t_File_get__absoluteFile(t_File *self, void *data);
    static PyObject *t_File_get__absolutePath(t_File *self, void *data);
    static PyObject *t_File_get__canonicalFile(t_File *self, void *data);
    static PyObject *t_File_get__canonicalPath(t_File *self, void *data);
    static PyObject *t_File_get__directory(t_File *self, void *data);
    static int t_File_set__executable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__file(t_File *self, void *data);
    static PyObject *t_File_get__freeSpace(t_File *self, void *data);
    static PyObject *t_File_get__hidden(t_File *self, void *data);
    static PyObject *t_File_get__name(t_File *self, void *data);
    static PyObject *t_File_get__parent(t_File *self, void *data);
    static PyObject *t_File_get__parentFile(t_File *self, void *data);
    static PyObject *t_File_get__path(t_File *self, void *data);
    static int t_File_set__readable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__totalSpace(t_File *self, void *data);
    static PyObject *t_File_get__usableSpace(t_File *self, void *data);
    static int t_File_set__writable(t_File *self, PyObject *arg, void *data);
    static PyGetSetDef t_File__fields_[] = {
      DECLARE_GET_FIELD(t_File, absolute),
      DECLARE_GET_FIELD(t_File, absoluteFile),
      DECLARE_GET_FIELD(t_File, absolutePath),
      DECLARE_GET_FIELD(t_File, canonicalFile),
      DECLARE_GET_FIELD(t_File, canonicalPath),
      DECLARE_GET_FIELD(t_File, directory),
      DECLARE_SET_FIELD(t_File, executable),
      DECLARE_GET_FIELD(t_File, file),
      DECLARE_GET_FIELD(t_File, freeSpace),
      DECLARE_GET_FIELD(t_File, hidden),
      DECLARE_GET_FIELD(t_File, name),
      DECLARE_GET_FIELD(t_File, parent),
      DECLARE_GET_FIELD(t_File, parentFile),
      DECLARE_GET_FIELD(t_File, path),
      DECLARE_SET_FIELD(t_File, readable),
      DECLARE_GET_FIELD(t_File, totalSpace),
      DECLARE_GET_FIELD(t_File, usableSpace),
      DECLARE_SET_FIELD(t_File, writable),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_File__methods_[] = {
      DECLARE_METHOD(t_File, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, canExecute, METH_NOARGS),
      DECLARE_METHOD(t_File, canRead, METH_NOARGS),
      DECLARE_METHOD(t_File, canWrite, METH_NOARGS),
      DECLARE_METHOD(t_File, compareTo, METH_O),
      DECLARE_METHOD(t_File, createNewFile, METH_NOARGS),
      DECLARE_METHOD(t_File, createTempFile, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_File, delete, METH_NOARGS),
      DECLARE_METHOD(t_File, deleteOnExit, METH_NOARGS),
      DECLARE_METHOD(t_File, equals, METH_VARARGS),
      DECLARE_METHOD(t_File, exists, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsoluteFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsolutePath, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getFreeSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getName, METH_NOARGS),
      DECLARE_METHOD(t_File, getParent, METH_NOARGS),
      DECLARE_METHOD(t_File, getParentFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getTotalSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getUsableSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_File, isAbsolute, METH_NOARGS),
      DECLARE_METHOD(t_File, isDirectory, METH_NOARGS),
      DECLARE_METHOD(t_File, isFile, METH_NOARGS),
      DECLARE_METHOD(t_File, isHidden, METH_NOARGS),
      DECLARE_METHOD(t_File, lastModified, METH_NOARGS),
      DECLARE_METHOD(t_File, length, METH_NOARGS),
      DECLARE_METHOD(t_File, list, METH_VARARGS),
      DECLARE_METHOD(t_File, listFiles, METH_VARARGS),
      DECLARE_METHOD(t_File, listRoots, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_File, mkdir, METH_NOARGS),
      DECLARE_METHOD(t_File, mkdirs, METH_NOARGS),
      DECLARE_METHOD(t_File, renameTo, METH_O),
      DECLARE_METHOD(t_File, setExecutable, METH_VARARGS),
      DECLARE_METHOD(t_File, setLastModified, METH_O),
      DECLARE_METHOD(t_File, setReadOnly, METH_NOARGS),
      DECLARE_METHOD(t_File, setReadable, METH_VARARGS),
      DECLARE_METHOD(t_File, setWritable, METH_VARARGS),
      DECLARE_METHOD(t_File, toString, METH_VARARGS),
      DECLARE_METHOD(t_File, toURL, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(File)[] = {
      { Py_tp_methods, t_File__methods_ },
      { Py_tp_init, (void *) t_File_init_ },
      { Py_tp_getset, t_File__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(File)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(File, t_File, File);

    void t_File::install(PyObject *module)
    {
      installType(&PY_TYPE(File), &PY_TYPE_DEF(File), module, "File", 0);
    }

    void t_File::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "class_", make_descriptor(File::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "wrapfn_", make_descriptor(t_File::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "boxfn_", make_descriptor(boxObject));
      env->getClass(File::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparator", make_descriptor(j2p(*File::pathSeparator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparatorChar", make_descriptor(File::pathSeparatorChar));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separator", make_descriptor(j2p(*File::separator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separatorChar", make_descriptor(File::separatorChar));
    }

    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, File::initializeClass, 1)))
        return NULL;
      return t_File::wrap_Object(File(((t_File *) arg)->object.this$));
    }
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, File::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = File(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ks", File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
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

    static PyObject *t_File_canExecute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canExecute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canRead(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canRead());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canWrite(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canWrite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_compareTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_File_createNewFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.createNewFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1));
            return t_File::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File a2((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ssk", File::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1, a2));
            return t_File::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "createTempFile", args);
      return NULL;
    }

    static PyObject *t_File_delete(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.delete$());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_deleteOnExit(t_File *self)
    {
      OBJ_CALL(self->object.deleteOnExit());
      Py_RETURN_NONE;
    }

    static PyObject *t_File_equals(t_File *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_File_exists(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.exists());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_getAbsoluteFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsoluteFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getAbsolutePath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsolutePath());
      return j2p(result);
    }

    static PyObject *t_File_getCanonicalFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getCanonicalPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalPath());
      return j2p(result);
    }

    static PyObject *t_File_getFreeSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getName(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_File_getParent(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getParent());
      return j2p(result);
    }

    static PyObject *t_File_getParentFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getParentFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_File_getTotalSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getUsableSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_hashCode(t_File *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_File_isAbsolute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAbsolute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isDirectory(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDirectory());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isHidden(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isHidden());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_lastModified(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.lastModified());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_length(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_list(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.list());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.list(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "list", args);
      return NULL;
    }

    static PyObject *t_File_listFiles(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< File > result((jobject) NULL);
          OBJ_CALL(result = self->object.listFiles());
          return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
        }
        break;
       case 1:
        {
          ::java::io::FileFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listFiles", args);
      return NULL;
    }

    static PyObject *t_File_listRoots(PyTypeObject *type)
    {
      JArray< File > result((jobject) NULL);
      OBJ_CALL(result = ::java::io::File::listRoots());
      return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
    }

    static PyObject *t_File_mkdir(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdir());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_mkdirs(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdirs());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_renameTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.renameTo(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "renameTo", arg);
      return NULL;
    }

    static PyObject *t_File_setExecutable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setExecutable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setExecutable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setExecutable", args);
      return NULL;
    }

    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg)
    {
      jlong a0;
      jboolean result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.setLastModified(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setLastModified", arg);
      return NULL;
    }

    static PyObject *t_File_setReadOnly(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.setReadOnly());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_setReadable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setReadable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setReadable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setReadable", args);
      return NULL;
    }

    static PyObject *t_File_setWritable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setWritable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setWritable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setWritable", args);
      return NULL;
    }

    static PyObject *t_File_toString(t_File *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_File_toURL(t_File *self)
    {
      ::java::net::URL result((jobject) NULL);
      OBJ_CALL(result = self->object.toURL());
      return ::java::net::t_URL::wrap_Object(result);
    }

    static PyObject *t_File_get__absolute(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAbsolute());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__absoluteFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsoluteFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__absolutePath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsolutePath());
      return j2p(value);
    }

    static PyObject *t_File_get__canonicalFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__canonicalPath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalPath());
      return j2p(value);
    }

    static PyObject *t_File_get__directory(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDirectory());
      Py_RETURN_BOOL(value);
    }

    static int t_File_set__executable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setExecutable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "executable", arg);
      return -1;
    }

    static PyObject *t_File_get__file(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFile());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__freeSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__hidden(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isHidden());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__name(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_File_get__parent(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getParent());
      return j2p(value);
    }

    static PyObject *t_File_get__parentFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getParentFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__path(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static int t_File_set__readable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setReadable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "readable", arg);
      return -1;
    }

    static PyObject *t_File_get__totalSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__usableSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static int t_File_set__writable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setWritable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "writable", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/JacobianPropagatorConverter.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *JacobianPropagatorConverter::class$ = NULL;
        jmethodID *JacobianPropagatorConverter::mids$ = NULL;
        bool JacobianPropagatorConverter::live$ = false;

        jclass JacobianPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/JacobianPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_45325e8dc5d4fe37] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;DI)V");
            mids$[mid_getModel_6a20d4ddc607b9bb] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_72c2cddd79f92b83] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianPropagatorConverter::JacobianPropagatorConverter(const ::org::orekit::propagation::conversion::NumericalPropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_45325e8dc5d4fe37, a0.this$, a1, a2)) {}
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
        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_JacobianPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_JacobianPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianPropagatorConverter, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(JacobianPropagatorConverter)[] = {
          { Py_tp_methods, t_JacobianPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_JacobianPropagatorConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(JacobianPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(JacobianPropagatorConverter, t_JacobianPropagatorConverter, JacobianPropagatorConverter);

        void t_JacobianPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(JacobianPropagatorConverter), &PY_TYPE_DEF(JacobianPropagatorConverter), module, "JacobianPropagatorConverter", 0);
        }

        void t_JacobianPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "class_", make_descriptor(JacobianPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "wrapfn_", make_descriptor(t_JacobianPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, JacobianPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_JacobianPropagatorConverter::wrap_Object(JacobianPropagatorConverter(((t_JacobianPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, JacobianPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::NumericalPropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          JacobianPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::NumericalPropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = JacobianPropagatorConverter(a0, a1, a2));
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesRangeModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesRangeModifier::live$ = false;

          jclass RelativisticClockInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesRangeModifier::RelativisticClockInterSatellitesRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::java::util::List RelativisticClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesRangeModifier, t_RelativisticClockInterSatellitesRangeModifier, RelativisticClockInterSatellitesRangeModifier);

          void t_RelativisticClockInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesRangeModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesRangeModifier), module, "RelativisticClockInterSatellitesRangeModifier", 0);
          }

          void t_RelativisticClockInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "class_", make_descriptor(RelativisticClockInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesRangeModifier::wrap_Object(RelativisticClockInterSatellitesRangeModifier(((t_RelativisticClockInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaIntegrator::live$ = false;

        jclass ClassicalRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_2ef249667bc5971a] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegrator::ClassicalRungeKuttaIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        JArray< JArray< jdouble > > ClassicalRungeKuttaIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
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
        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegrator, t_ClassicalRungeKuttaIntegrator, ClassicalRungeKuttaIntegrator);

        void t_ClassicalRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaIntegrator), module, "ClassicalRungeKuttaIntegrator", 0);
        }

        void t_ClassicalRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "class_", make_descriptor(ClassicalRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegrator::wrap_Object(ClassicalRungeKuttaIntegrator(((t_ClassicalRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data)
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
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeSpanMap$Transition::class$ = NULL;
      jmethodID *FieldTimeSpanMap$Transition::mids$ = NULL;
      bool FieldTimeSpanMap$Transition::live$ = false;

      jclass FieldTimeSpanMap$Transition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeSpanMap$Transition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAbsoluteDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getAbsoluteDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getAfter_541690f9ee81d3ad] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_541690f9ee81d3ad] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeSpanMap$Transition::getAbsoluteDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getAbsoluteDate_fa23a4301b9c83e7]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_541690f9ee81d3ad]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_541690f9ee81d3ad]));
      }

      ::org::orekit::time::AbsoluteDate FieldTimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
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
      static PyObject *t_FieldTimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap$Transition_of_(t_FieldTimeSpanMap$Transition *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap$Transition_getAbsoluteDate(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getAfter(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getBefore(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getDate(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_get__absoluteDate(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__after(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__before(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__date(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__parameters_(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyGetSetDef t_FieldTimeSpanMap$Transition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, absoluteDate),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, after),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, before),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, date),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeSpanMap$Transition__methods_[] = {
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getAbsoluteDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getAfter, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getBefore, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeSpanMap$Transition)[] = {
        { Py_tp_methods, t_FieldTimeSpanMap$Transition__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeSpanMap$Transition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeSpanMap$Transition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeSpanMap$Transition, t_FieldTimeSpanMap$Transition, FieldTimeSpanMap$Transition);
      PyObject *t_FieldTimeSpanMap$Transition::wrap_Object(const FieldTimeSpanMap$Transition& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap$Transition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap$Transition *self = (t_FieldTimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeSpanMap$Transition::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap$Transition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap$Transition *self = (t_FieldTimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeSpanMap$Transition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeSpanMap$Transition), &PY_TYPE_DEF(FieldTimeSpanMap$Transition), module, "FieldTimeSpanMap$Transition", 0);
      }

      void t_FieldTimeSpanMap$Transition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "class_", make_descriptor(FieldTimeSpanMap$Transition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "wrapfn_", make_descriptor(t_FieldTimeSpanMap$Transition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeSpanMap$Transition::initializeClass, 1)))
          return NULL;
        return t_FieldTimeSpanMap$Transition::wrap_Object(FieldTimeSpanMap$Transition(((t_FieldTimeSpanMap$Transition *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeSpanMap$Transition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeSpanMap$Transition_of_(t_FieldTimeSpanMap$Transition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getAbsoluteDate(t_FieldTimeSpanMap$Transition *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsoluteDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getAfter(t_FieldTimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getAfter());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getBefore(t_FieldTimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getBefore());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getDate(t_FieldTimeSpanMap$Transition *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }
      static PyObject *t_FieldTimeSpanMap$Transition_get__parameters_(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__absoluteDate(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsoluteDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__after(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getAfter());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__before(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getBefore());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__date(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStateInterpolator::class$ = NULL;
        jmethodID *FieldODEStateInterpolator::mids$ = NULL;
        bool FieldODEStateInterpolator::live$ = false;

        jclass FieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_b7aa8b39e4b21836] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_285853fa8f6e2f48] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_b7aa8b39e4b21836] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_b7aa8b39e4b21836]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_285853fa8f6e2f48], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_b7aa8b39e4b21836]));
        }

        jboolean FieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105]);
        }

        jboolean FieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        jboolean FieldODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105]);
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
      namespace sampling {
        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_FieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_FieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStateInterpolator, t_FieldODEStateInterpolator, FieldODEStateInterpolator);
        PyObject *t_FieldODEStateInterpolator::wrap_Object(const FieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStateInterpolator), &PY_TYPE_DEF(FieldODEStateInterpolator), module, "FieldODEStateInterpolator", 0);
        }

        void t_FieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "class_", make_descriptor(FieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "wrapfn_", make_descriptor(t_FieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldODEStateInterpolator::wrap_Object(FieldODEStateInterpolator(((t_FieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresOptimizer$Optimum::class$ = NULL;
            jmethodID *LeastSquaresOptimizer$Optimum::mids$ = NULL;
            bool LeastSquaresOptimizer$Optimum::live$ = false;

            jclass LeastSquaresOptimizer$Optimum::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
                mids$[mid_getIterations_55546ef6a647f39b] = env->getMethodID(cls, "getIterations", "()I");
                mids$[mid_of_e0ec42e661f48cc5] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LeastSquaresOptimizer$Optimum::getEvaluations() const
            {
              return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
            }

            jint LeastSquaresOptimizer$Optimum::getIterations() const
            {
              return env->callIntMethod(this$, mids$[mid_getIterations_55546ef6a647f39b]);
            }

            LeastSquaresOptimizer$Optimum LeastSquaresOptimizer$Optimum::of(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return LeastSquaresOptimizer$Optimum(env->callStaticObjectMethod(cls, mids$[mid_of_e0ec42e661f48cc5], a0.this$, a1, a2));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresOptimizer$Optimum_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer$Optimum_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer$Optimum_getEvaluations(t_LeastSquaresOptimizer$Optimum *self);
            static PyObject *t_LeastSquaresOptimizer$Optimum_getIterations(t_LeastSquaresOptimizer$Optimum *self);
            static PyObject *t_LeastSquaresOptimizer$Optimum_of(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresOptimizer$Optimum_get__evaluations(t_LeastSquaresOptimizer$Optimum *self, void *data);
            static PyObject *t_LeastSquaresOptimizer$Optimum_get__iterations(t_LeastSquaresOptimizer$Optimum *self, void *data);
            static PyGetSetDef t_LeastSquaresOptimizer$Optimum__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresOptimizer$Optimum, evaluations),
              DECLARE_GET_FIELD(t_LeastSquaresOptimizer$Optimum, iterations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresOptimizer$Optimum__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, getEvaluations, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, getIterations, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, of, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresOptimizer$Optimum)[] = {
              { Py_tp_methods, t_LeastSquaresOptimizer$Optimum__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresOptimizer$Optimum__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresOptimizer$Optimum)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation),
              NULL
            };

            DEFINE_TYPE(LeastSquaresOptimizer$Optimum, t_LeastSquaresOptimizer$Optimum, LeastSquaresOptimizer$Optimum);

            void t_LeastSquaresOptimizer$Optimum::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresOptimizer$Optimum), &PY_TYPE_DEF(LeastSquaresOptimizer$Optimum), module, "LeastSquaresOptimizer$Optimum", 0);
            }

            void t_LeastSquaresOptimizer$Optimum::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "class_", make_descriptor(LeastSquaresOptimizer$Optimum::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "wrapfn_", make_descriptor(t_LeastSquaresOptimizer$Optimum::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresOptimizer$Optimum::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresOptimizer$Optimum::wrap_Object(LeastSquaresOptimizer$Optimum(((t_LeastSquaresOptimizer$Optimum *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresOptimizer$Optimum_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresOptimizer$Optimum::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_getEvaluations(t_LeastSquaresOptimizer$Optimum *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getEvaluations());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_getIterations(t_LeastSquaresOptimizer$Optimum *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIterations());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_of(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a0((jobject) NULL);
              jint a1;
              jint a2;
              LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArgs(args, "kII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum::of(a0, a1, a2));
                return t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "of", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_get__evaluations(t_LeastSquaresOptimizer$Optimum *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getEvaluations());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_get__iterations(t_LeastSquaresOptimizer$Optimum *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIterations());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHull::class$ = NULL;
        jmethodID *ConvexHull::mids$ = NULL;
        bool ConvexHull::live$ = false;

        jclass ConvexHull::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHull");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createRegion_3698fd1911856e70] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getVertices_afc97567b9ab5b54] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::Region ConvexHull::createRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_3698fd1911856e70]));
        }

        JArray< ::org::hipparchus::geometry::Point > ConvexHull::getVertices() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getVertices_afc97567b9ab5b54]));
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
      namespace hull {
        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args);
        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self);
        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self);
        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data);
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data);
        static PyGetSetDef t_ConvexHull__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHull, vertices),
          DECLARE_GET_FIELD(t_ConvexHull, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHull__methods_[] = {
          DECLARE_METHOD(t_ConvexHull, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHull, createRegion, METH_NOARGS),
          DECLARE_METHOD(t_ConvexHull, getVertices, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHull)[] = {
          { Py_tp_methods, t_ConvexHull__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHull__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHull)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ConvexHull, t_ConvexHull, ConvexHull);
        PyObject *t_ConvexHull::wrap_Object(const ConvexHull& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHull::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHull::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHull), &PY_TYPE_DEF(ConvexHull), module, "ConvexHull", 0);
        }

        void t_ConvexHull::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "class_", make_descriptor(ConvexHull::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "wrapfn_", make_descriptor(t_ConvexHull::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHull::initializeClass, 1)))
            return NULL;
          return t_ConvexHull::wrap_Object(ConvexHull(((t_ConvexHull *) arg)->object.this$));
        }
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHull::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.createRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self)
        {
          JArray< ::org::hipparchus::geometry::Point > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVertices());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data)
        {
          JArray< ::org::hipparchus::geometry::Point > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVertices());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_b6d0b49c4659d5f2] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_84faa23834a0f7e9] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_33d67d456ec94a0c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_6ccee58ca07f59cc] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b6d0b49c4659d5f2, a0, a1.this$)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_84faa23834a0f7e9, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_33d67d456ec94a0c]));
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
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator, t_TimeStampedAngularCoordinatesHermiteInterpolator, TimeStampedAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedAngularCoordinatesHermiteInterpolator), module, "TimeStampedAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedAngularCoordinatesHermiteInterpolator(((t_TimeStampedAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
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

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitEphemerisFile.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile::class$ = NULL;
        jmethodID *OrekitEphemerisFile::mids$ = NULL;
        bool OrekitEphemerisFile::live$ = false;

        jclass OrekitEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_d4cceb8b0840180e] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris;");
            mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile::OrekitEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris OrekitEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_d4cceb8b0840180e], a0.this$));
        }

        ::java::util::Map OrekitEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
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
      namespace general {
        static PyObject *t_OrekitEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile_init_(t_OrekitEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile_addSatellite(t_OrekitEphemerisFile *self, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile_getSatellites(t_OrekitEphemerisFile *self);
        static PyObject *t_OrekitEphemerisFile_get__satellites(t_OrekitEphemerisFile *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile, addSatellite, METH_O),
          DECLARE_METHOD(t_OrekitEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile, t_OrekitEphemerisFile, OrekitEphemerisFile);

        void t_OrekitEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile), &PY_TYPE_DEF(OrekitEphemerisFile), module, "OrekitEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "OrekitSatelliteEphemeris", make_descriptor(&PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "OrekitEphemerisSegment", make_descriptor(&PY_TYPE_DEF(OrekitEphemerisFile$OrekitEphemerisSegment)));
        }

        void t_OrekitEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "class_", make_descriptor(OrekitEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "wrapfn_", make_descriptor(t_OrekitEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile::wrap_Object(OrekitEphemerisFile(((t_OrekitEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile_init_(t_OrekitEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          OrekitEphemerisFile object((jobject) NULL);

          INT_CALL(object = OrekitEphemerisFile());
          self->object = object;

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile_addSatellite(t_OrekitEphemerisFile *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.addSatellite(a0));
            return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_OrekitEphemerisFile_getSatellites(t_OrekitEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::general::PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris));
        }

        static PyObject *t_OrekitEphemerisFile_get__satellites(t_OrekitEphemerisFile *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/RangeRateBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeRateBuilder::class$ = NULL;
          jmethodID *RangeRateBuilder::mids$ = NULL;
          bool RangeRateBuilder::live$ = false;

          jclass RangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9b5700032cdfc1f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_11a5aa3b25064d71] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/RangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateBuilder::RangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_9b5700032cdfc1f4, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::RangeRate RangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::RangeRate(env->callObjectMethod(this$, mids$[mid_build_11a5aa3b25064d71], a0.this$, a1.this$));
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
          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args);
          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args);
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data);
          static PyGetSetDef t_RangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateBuilder)[] = {
            { Py_tp_methods, t_RangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeRateBuilder_init_ },
            { Py_tp_getset, t_RangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeRateBuilder, t_RangeRateBuilder, RangeRateBuilder);
          PyObject *t_RangeRateBuilder::wrap_Object(const RangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateBuilder), &PY_TYPE_DEF(RangeRateBuilder), module, "RangeRateBuilder", 0);
          }

          void t_RangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "class_", make_descriptor(RangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "wrapfn_", make_descriptor(t_RangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeRateBuilder::wrap_Object(RangeRateBuilder(((t_RangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeRateBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::RangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_RangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data)
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
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet::class$ = NULL;
          jmethodID *ArcsSet::mids$ = NULL;
          bool ArcsSet::live$ = false;

          jclass ArcsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_936ab5386aba1bbf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_16deaf08470737f9] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_e62d3bb06d56d7e3] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_4a0145c8cc4eaec9] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_dcacfc1bc354b9c2] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_split_795e615ef85ba37b] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/spherical/oned/Arc;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet$Split;");
              mids$[mid_computeGeometricalProperties_a1fa5dae97ea5ed2] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet::ArcsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          ArcsSet::ArcsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_936ab5386aba1bbf, a0.this$, a1)) {}

          ArcsSet::ArcsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_16deaf08470737f9, a0.this$, a1)) {}

          ArcsSet::ArcsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::java::util::List ArcsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_e62d3bb06d56d7e3]));
          }

          ArcsSet ArcsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return ArcsSet(env->callObjectMethod(this$, mids$[mid_buildNew_4a0145c8cc4eaec9], a0.this$));
          }

          ::java::util::Iterator ArcsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection ArcsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_dcacfc1bc354b9c2], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split ArcsSet::split(const ::org::hipparchus::geometry::spherical::oned::Arc & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split(env->callObjectMethod(this$, mids$[mid_split_795e615ef85ba37b], a0.this$));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_ArcsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet_of_(t_ArcsSet *self, PyObject *args);
          static int t_ArcsSet_init_(t_ArcsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArcsSet_asList(t_ArcsSet *self);
          static PyObject *t_ArcsSet_buildNew(t_ArcsSet *self, PyObject *args);
          static PyObject *t_ArcsSet_iterator(t_ArcsSet *self);
          static PyObject *t_ArcsSet_projectToBoundary(t_ArcsSet *self, PyObject *args);
          static PyObject *t_ArcsSet_split(t_ArcsSet *self, PyObject *arg);
          static PyObject *t_ArcsSet_get__parameters_(t_ArcsSet *self, void *data);
          static PyGetSetDef t_ArcsSet__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet__methods_[] = {
            DECLARE_METHOD(t_ArcsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, asList, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet, projectToBoundary, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, split, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet)[] = {
            { Py_tp_methods, t_ArcsSet__methods_ },
            { Py_tp_init, (void *) t_ArcsSet_init_ },
            { Py_tp_getset, t_ArcsSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_ArcsSet *)) get_generic_iterator< t_ArcsSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(ArcsSet, t_ArcsSet, ArcsSet);
          PyObject *t_ArcsSet::wrap_Object(const ArcsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet *self = (t_ArcsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet *self = (t_ArcsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet), &PY_TYPE_DEF(ArcsSet), module, "ArcsSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "InconsistentStateAt2PiWrapping", make_descriptor(&PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "Split", make_descriptor(&PY_TYPE_DEF(ArcsSet$Split)));
          }

          void t_ArcsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "class_", make_descriptor(ArcsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "wrapfn_", make_descriptor(t_ArcsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet::initializeClass, 1)))
              return NULL;
            return t_ArcsSet::wrap_Object(ArcsSet(((t_ArcsSet *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet_of_(t_ArcsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ArcsSet_init_(t_ArcsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = ArcsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = ArcsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = ArcsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = ArcsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
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

          static PyObject *t_ArcsSet_asList(t_ArcsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.asList());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Arc));
          }

          static PyObject *t_ArcsSet_buildNew(t_ArcsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            ArcsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_ArcsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ArcsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_ArcsSet_iterator(t_ArcsSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_ArcsSet_projectToBoundary(t_ArcsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.projectToBoundary(a0));
              return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            return callSuper(PY_TYPE(ArcsSet), (PyObject *) self, "projectToBoundary", args, 2);
          }

          static PyObject *t_ArcsSet_split(t_ArcsSet *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::spherical::oned::Arc a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::spherical::oned::Arc::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet$Split::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "split", arg);
            return NULL;
          }
          static PyObject *t_ArcsSet_get__parameters_(t_ArcsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
