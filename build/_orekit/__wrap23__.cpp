#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/RinexFile.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *RinexFile::class$ = NULL;
        jmethodID *RinexFile::mids$ = NULL;
        bool RinexFile::live$ = false;

        jclass RinexFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/RinexFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addComment_4f4944d1a215603e] = env->getMethodID(cls, "addComment", "(Lorg/orekit/files/rinex/section/RinexComment;)V");
            mids$[mid_getComments_2afa36052df4765d] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_c152fe3e8867bec0] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/rinex/section/RinexBaseHeader;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void RinexFile::addComment(const ::org::orekit::files::rinex::section::RinexComment & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_4f4944d1a215603e], a0.this$);
        }

        ::java::util::List RinexFile::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_2afa36052df4765d]));
        }

        ::org::orekit::files::rinex::section::RinexBaseHeader RinexFile::getHeader() const
        {
          return ::org::orekit::files::rinex::section::RinexBaseHeader(env->callObjectMethod(this$, mids$[mid_getHeader_c152fe3e8867bec0]));
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
      namespace rinex {
        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args);
        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg);
        static PyObject *t_RinexFile_getComments(t_RinexFile *self);
        static PyObject *t_RinexFile_getHeader(t_RinexFile *self);
        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data);
        static PyGetSetDef t_RinexFile__fields_[] = {
          DECLARE_GET_FIELD(t_RinexFile, comments),
          DECLARE_GET_FIELD(t_RinexFile, header),
          DECLARE_GET_FIELD(t_RinexFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RinexFile__methods_[] = {
          DECLARE_METHOD(t_RinexFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_RinexFile, addComment, METH_O),
          DECLARE_METHOD(t_RinexFile, getComments, METH_NOARGS),
          DECLARE_METHOD(t_RinexFile, getHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RinexFile)[] = {
          { Py_tp_methods, t_RinexFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RinexFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RinexFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RinexFile, t_RinexFile, RinexFile);
        PyObject *t_RinexFile::wrap_Object(const RinexFile& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RinexFile::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RinexFile::install(PyObject *module)
        {
          installType(&PY_TYPE(RinexFile), &PY_TYPE_DEF(RinexFile), module, "RinexFile", 0);
        }

        void t_RinexFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "class_", make_descriptor(RinexFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "wrapfn_", make_descriptor(t_RinexFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RinexFile::initializeClass, 1)))
            return NULL;
          return t_RinexFile::wrap_Object(RinexFile(((t_RinexFile *) arg)->object.this$));
        }
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RinexFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg)
        {
          ::org::orekit::files::rinex::section::RinexComment a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::rinex::section::RinexComment::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_RinexFile_getComments(t_RinexFile *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::section::PY_TYPE(RinexComment));
        }

        static PyObject *t_RinexFile_getHeader(t_RinexFile *self)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(result);
        }
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/KvnStructureProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *KvnStructureProcessingState::class$ = NULL;
          jmethodID *KvnStructureProcessingState::mids$ = NULL;
          bool KvnStructureProcessingState::live$ = false;

          jclass KvnStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8348465aaad0e8dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_85d9863c57bc3b0c] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KvnStructureProcessingState::KvnStructureProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8348465aaad0e8dc, a0.this$)) {}

          jboolean KvnStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_85d9863c57bc3b0c], a0.this$);
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
        namespace section {
          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_KvnStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_KvnStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureProcessingState)[] = {
            { Py_tp_methods, t_KvnStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_KvnStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(KvnStructureProcessingState, t_KvnStructureProcessingState, KvnStructureProcessingState);

          void t_KvnStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureProcessingState), &PY_TYPE_DEF(KvnStructureProcessingState), module, "KvnStructureProcessingState", 0);
          }

          void t_KvnStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "class_", make_descriptor(KvnStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "wrapfn_", make_descriptor(t_KvnStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_KvnStructureProcessingState::wrap_Object(KvnStructureProcessingState(((t_KvnStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            KvnStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = KvnStructureProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *ShortTermEncounter2DDefinition::mids$ = NULL;
              bool ShortTermEncounter2DDefinition::live$ = false;

              jclass ShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_4fe13521304776f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_13af9ca71f8687fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_e1546d8682430186] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_ca18786c1f4c729b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_9114b59f891867ba] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_9114b59f891867ba] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_dff5885c2c873297] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()D");
                  mids$[mid_computeMahalanobisDistance_dff5885c2c873297] = env->getMethodID(cls, "computeMahalanobisDistance", "()D");
                  mids$[mid_computeMahalanobisDistance_dcbc7ce2902fa136] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)D");
                  mids$[mid_computeMissDistance_dff5885c2c873297] = env->getMethodID(cls, "computeMissDistance", "()D");
                  mids$[mid_computeOtherPositionInCollisionPlane_73f627838730c264] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_73f627838730c264] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_1d94587a4ec1fe0f] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_9b7c658c14883c84] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/PVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_688b496048ff947b] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_dff5885c2c873297] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()D");
                  mids$[mid_computeSquaredMahalanobisDistance_dcbc7ce2902fa136] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)D");
                  mids$[mid_computeSquaredMahalanobisDistance_998d433b20cbd8ab] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/linear/RealMatrix;)D");
                  mids$[mid_computeSquaredMahalanobisDistance_0f015b8be9d2dc40] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(DDDD)D");
                  mids$[mid_getCombinedRadius_dff5885c2c873297] = env->getMethodID(cls, "getCombinedRadius", "()D");
                  mids$[mid_getEncounterFrame_6568301d8415835c] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_cde5690bfa4f9649] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getOtherCovariance_9114b59f891867ba] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getReferenceAtTCA_cde5690bfa4f9649] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getReferenceCovariance_9114b59f891867ba] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getTca_85703d13e302437e] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fe13521304776f7, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13af9ca71f8687fc, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1546d8682430186, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ca18786c1f4c729b, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7)) {}

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_9114b59f891867ba]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_9114b59f891867ba]));
              }

              jdouble ShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeCoppolaEncounterDuration_dff5885c2c873297]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_dff5885c2c873297]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_dcbc7ce2902fa136], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMissDistance_dff5885c2c873297]);
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_73f627838730c264]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_73f627838730c264]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_1d94587a4ec1fe0f], a0));
              }

              ::org::orekit::utils::PVCoordinates ShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_9b7c658c14883c84]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_688b496048ff947b]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_688b496048ff947b]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_688b496048ff947b]));
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_dff5885c2c873297]);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_dcbc7ce2902fa136], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::linear::RealMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_998d433b20cbd8ab], a0.this$, a1.this$);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_0f015b8be9d2dc40], a0, a1, a2, a3);
              }

              jdouble ShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCombinedRadius_dff5885c2c873297]);
              }

              ::org::orekit::frames::encounter::EncounterLOF ShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_6568301d8415835c]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_cde5690bfa4f9649]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_9114b59f891867ba]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_cde5690bfa4f9649]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_9114b59f891867ba]));
              }

              ::org::orekit::time::AbsoluteDate ShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_85703d13e302437e]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, tca),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_ShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_ShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DDefinition, t_ShortTermEncounter2DDefinition, ShortTermEncounter2DDefinition);

              void t_ShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DDefinition), &PY_TYPE_DEF(ShortTermEncounter2DDefinition), module, "ShortTermEncounter2DDefinition", 0);
              }

              void t_ShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "class_", make_descriptor(ShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_ShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DDefinition::wrap_Object(ShortTermEncounter2DDefinition(((t_ShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeMissDistance());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::PVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                    ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                    jdouble result;

                    if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                  break;
                 case 4:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble result;

                    if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/utils/AbstractMultipleShooting.h"
#include "java/util/List.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbstractMultipleShooting::class$ = NULL;
      jmethodID *AbstractMultipleShooting::mids$ = NULL;
      bool AbstractMultipleShooting::live$ = false;

      jclass AbstractMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbstractMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addConstraint_1506189166690b5e] = env->getMethodID(cls, "addConstraint", "(IID)V");
          mids$[mid_compute_2afa36052df4765d] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_setEpochFreedom_f61a0322e15bde25] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
          mids$[mid_setPatchPointComponentFreedom_1d19b51c24eaaa6c] = env->getMethodID(cls, "setPatchPointComponentFreedom", "(IIZ)V");
          mids$[mid_setScaleLength_17db3a65980d3441] = env->getMethodID(cls, "setScaleLength", "(D)V");
          mids$[mid_setScaleTime_17db3a65980d3441] = env->getMethodID(cls, "setScaleTime", "(D)V");
          mids$[mid_getPatchPoint_8f68ada11fb66675] = env->getMethodID(cls, "getPatchPoint", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getConstraintsMap_6f5a75ccd8c04465] = env->getMethodID(cls, "getConstraintsMap", "()Ljava/util/Map;");
          mids$[mid_getFreeCompsMap_43b0b5b620a83f8e] = env->getMethodID(cls, "getFreeCompsMap", "()[Z");
          mids$[mid_getNumberOfFreeComponents_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfFreeComponents", "()I");
          mids$[mid_getPatchedSpacecraftState_2afa36052df4765d] = env->getMethodID(cls, "getPatchedSpacecraftState", "()Ljava/util/List;");
          mids$[mid_updateAdditionalConstraints_7169a8c8a60b8b2c] = env->getMethodID(cls, "updateAdditionalConstraints", "(I[D)V");
          mids$[mid_getNumberOfConstraints_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfConstraints", "()I");
          mids$[mid_getAugmentedInitialState_8f68ada11fb66675] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_computeAdditionalJacobianMatrix_11c2223c723fd443] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_computeAdditionalConstraints_ae31e5696ec6455b] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeEpochJacobianMatrix_11c2223c723fd443] = env->getMethodID(cls, "computeEpochJacobianMatrix", "(Ljava/util/List;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMultipleShooting::addConstraint(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addConstraint_1506189166690b5e], a0, a1, a2);
      }

      ::java::util::List AbstractMultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_2afa36052df4765d]));
      }

      void AbstractMultipleShooting::setEpochFreedom(jint a0, jboolean a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEpochFreedom_f61a0322e15bde25], a0, a1);
      }

      void AbstractMultipleShooting::setPatchPointComponentFreedom(jint a0, jint a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setPatchPointComponentFreedom_1d19b51c24eaaa6c], a0, a1, a2);
      }

      void AbstractMultipleShooting::setScaleLength(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleLength_17db3a65980d3441], a0);
      }

      void AbstractMultipleShooting::setScaleTime(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleTime_17db3a65980d3441], a0);
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
      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self);
      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg);
      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractMultipleShooting__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleLength),
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleTime),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_AbstractMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, addConstraint, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, compute, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setEpochFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setPatchPointComponentFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleLength, METH_O),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleTime, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleShooting)[] = {
        { Py_tp_methods, t_AbstractMultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMultipleShooting, t_AbstractMultipleShooting, AbstractMultipleShooting);

      void t_AbstractMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMultipleShooting), &PY_TYPE_DEF(AbstractMultipleShooting), module, "AbstractMultipleShooting", 0);
      }

      void t_AbstractMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "class_", make_descriptor(AbstractMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "wrapfn_", make_descriptor(t_AbstractMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_AbstractMultipleShooting::wrap_Object(AbstractMultipleShooting(((t_AbstractMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addConstraint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addConstraint", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }

      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jboolean a1;

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(self->object.setEpochFreedom(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEpochFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean a2;

        if (!parseArgs(args, "IIZ", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setPatchPointComponentFreedom(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setPatchPointComponentFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleLength(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleLength", arg);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleTime(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleTime", arg);
        return NULL;
      }

      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleLength(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleLength", arg);
        return -1;
      }

      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleTime(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleTime", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *PythonTleGenerationAlgorithm::class$ = NULL;
            jmethodID *PythonTleGenerationAlgorithm::mids$ = NULL;
            bool PythonTleGenerationAlgorithm::live$ = false;

            jclass PythonTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_generate_bce44986dbf601d6] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_34f09d826252bcec] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonTleGenerationAlgorithm::PythonTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonTleGenerationAlgorithm::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonTleGenerationAlgorithm::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonTleGenerationAlgorithm::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace tle {
          namespace generation {
            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self);
            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_PythonTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_PythonTleGenerationAlgorithm, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_PythonTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_PythonTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_PythonTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonTleGenerationAlgorithm, t_PythonTleGenerationAlgorithm, PythonTleGenerationAlgorithm);

            void t_PythonTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonTleGenerationAlgorithm), &PY_TYPE_DEF(PythonTleGenerationAlgorithm), module, "PythonTleGenerationAlgorithm", 1);
            }

            void t_PythonTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "class_", make_descriptor(PythonTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_PythonTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonTleGenerationAlgorithm::initializeClass);
              JNINativeMethod methods[] = {
                { "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;", (void *) t_PythonTleGenerationAlgorithm_generate0 },
                { "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;", (void *) t_PythonTleGenerationAlgorithm_generate1 },
                { "pythonDecRef", "()V", (void *) t_PythonTleGenerationAlgorithm_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_PythonTleGenerationAlgorithm::wrap_Object(PythonTleGenerationAlgorithm(((t_PythonTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              PythonTleGenerationAlgorithm object((jobject) NULL);

              INT_CALL(object = PythonTleGenerationAlgorithm());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args)
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::FieldTLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(::org::orekit::propagation::analytical::tle::FieldTLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &value))
              {
                throwTypeError("generate", result);
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(::org::orekit::propagation::analytical::tle::TLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &value))
              {
                throwTypeError("generate", result);
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

            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FilesListCrawler.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FilesListCrawler::class$ = NULL;
      jmethodID *FilesListCrawler::mids$ = NULL;
      bool FilesListCrawler::live$ = false;

      jclass FilesListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FilesListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a66b8f9a1f4d3e60] = env->getMethodID(cls, "<init>", "([Ljava/io/File;)V");
          mids$[mid_getStream_8cc67f00b0eda4e2] = env->getMethodID(cls, "getStream", "(Ljava/io/File;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_af9b75c801e36cc0] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/io/File;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getBaseName_c66ac099b6d4472d] = env->getMethodID(cls, "getBaseName", "(Ljava/io/File;)Ljava/lang/String;");
          mids$[mid_getCompleteName_c66ac099b6d4472d] = env->getMethodID(cls, "getCompleteName", "(Ljava/io/File;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FilesListCrawler::FilesListCrawler(const JArray< ::java::io::File > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_a66b8f9a1f4d3e60, a0.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_FilesListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FilesListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FilesListCrawler_of_(t_FilesListCrawler *self, PyObject *args);
      static int t_FilesListCrawler_init_(t_FilesListCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FilesListCrawler_get__parameters_(t_FilesListCrawler *self, void *data);
      static PyGetSetDef t_FilesListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_FilesListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FilesListCrawler__methods_[] = {
        DECLARE_METHOD(t_FilesListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FilesListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FilesListCrawler, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FilesListCrawler)[] = {
        { Py_tp_methods, t_FilesListCrawler__methods_ },
        { Py_tp_init, (void *) t_FilesListCrawler_init_ },
        { Py_tp_getset, t_FilesListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FilesListCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(FilesListCrawler, t_FilesListCrawler, FilesListCrawler);
      PyObject *t_FilesListCrawler::wrap_Object(const FilesListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FilesListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FilesListCrawler *self = (t_FilesListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FilesListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FilesListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FilesListCrawler *self = (t_FilesListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FilesListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(FilesListCrawler), &PY_TYPE_DEF(FilesListCrawler), module, "FilesListCrawler", 0);
      }

      void t_FilesListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "class_", make_descriptor(FilesListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "wrapfn_", make_descriptor(t_FilesListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FilesListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FilesListCrawler::initializeClass, 1)))
          return NULL;
        return t_FilesListCrawler::wrap_Object(FilesListCrawler(((t_FilesListCrawler *) arg)->object.this$));
      }
      static PyObject *t_FilesListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FilesListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FilesListCrawler_of_(t_FilesListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FilesListCrawler_init_(t_FilesListCrawler *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::java::io::File > a0((jobject) NULL);
        FilesListCrawler object((jobject) NULL);

        if (!parseArgs(args, "[k", ::java::io::File::initializeClass, &a0))
        {
          INT_CALL(object = FilesListCrawler(a0));
          self->object = object;
          self->parameters[0] = ::java::io::PY_TYPE(File);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_FilesListCrawler_get__parameters_(t_FilesListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateVectorFunction::class$ = NULL;
      jmethodID *MultivariateVectorFunction::mids$ = NULL;
      bool MultivariateVectorFunction::live$ = false;

      jclass MultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_ac3d742ccc742f22] = env->getMethodID(cls, "value", "([D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > MultivariateVectorFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_ac3d742ccc742f22], a0.this$));
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
      static PyObject *t_MultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateVectorFunction_value(t_MultivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateVectorFunction)[] = {
        { Py_tp_methods, t_MultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateVectorFunction, t_MultivariateVectorFunction, MultivariateVectorFunction);

      void t_MultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateVectorFunction), &PY_TYPE_DEF(MultivariateVectorFunction), module, "MultivariateVectorFunction", 0);
      }

      void t_MultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "class_", make_descriptor(MultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "wrapfn_", make_descriptor(t_MultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateVectorFunction::wrap_Object(MultivariateVectorFunction(((t_MultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateVectorFunction_value(t_MultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/LambdaMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *LambdaMethod::class$ = NULL;
          jmethodID *LambdaMethod::mids$ = NULL;
          bool LambdaMethod::live$ = false;

          jclass LambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/LambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ltdlDecomposition_0fa09c18fee449d5] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_0fa09c18fee449d5] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_discreteSearch_0fa09c18fee449d5] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_inverseDecomposition_0fa09c18fee449d5] = env->getMethodID(cls, "inverseDecomposition", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LambdaMethod::LambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LambdaMethod__methods_[] = {
            DECLARE_METHOD(t_LambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LambdaMethod, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LambdaMethod)[] = {
            { Py_tp_methods, t_LambdaMethod__methods_ },
            { Py_tp_init, (void *) t_LambdaMethod_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(LambdaMethod, t_LambdaMethod, LambdaMethod);

          void t_LambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(LambdaMethod), &PY_TYPE_DEF(LambdaMethod), module, "LambdaMethod", 0);
          }

          void t_LambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "class_", make_descriptor(LambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "wrapfn_", make_descriptor(t_LambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LambdaMethod::initializeClass, 1)))
              return NULL;
            return t_LambdaMethod::wrap_Object(LambdaMethod(((t_LambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            LambdaMethod object((jobject) NULL);

            INT_CALL(object = LambdaMethod());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/PythonTileAiming.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *PythonTileAiming::class$ = NULL;
          jmethodID *PythonTileAiming::mids$ = NULL;
          bool PythonTileAiming::live$ = false;

          jclass PythonTileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/PythonTileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_alongTileDirection_cb13d5b31f03b28f] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getSingularPoints_2afa36052df4765d] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTileAiming::PythonTileAiming() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonTileAiming::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonTileAiming::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonTileAiming::pythonExtension(jlong a0) const
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
        namespace tessellation {
          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self);
          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args);
          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data);
          static PyGetSetDef t_PythonTileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTileAiming, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTileAiming__methods_[] = {
            DECLARE_METHOD(t_PythonTileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTileAiming, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTileAiming)[] = {
            { Py_tp_methods, t_PythonTileAiming__methods_ },
            { Py_tp_init, (void *) t_PythonTileAiming_init_ },
            { Py_tp_getset, t_PythonTileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTileAiming, t_PythonTileAiming, PythonTileAiming);

          void t_PythonTileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTileAiming), &PY_TYPE_DEF(PythonTileAiming), module, "PythonTileAiming", 1);
          }

          void t_PythonTileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "class_", make_descriptor(PythonTileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "wrapfn_", make_descriptor(t_PythonTileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTileAiming::initializeClass);
            JNINativeMethod methods[] = {
              { "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonTileAiming_alongTileDirection0 },
              { "getSingularPoints", "()Ljava/util/List;", (void *) t_PythonTileAiming_getSingularPoints1 },
              { "pythonDecRef", "()V", (void *) t_PythonTileAiming_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTileAiming::initializeClass, 1)))
              return NULL;
            return t_PythonTileAiming::wrap_Object(PythonTileAiming(((t_PythonTileAiming *) arg)->object.this$));
          }
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds)
          {
            PythonTileAiming object((jobject) NULL);

            INT_CALL(object = PythonTileAiming());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args)
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

          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *result = PyObject_CallMethod(obj, "alongTileDirection", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("alongTileDirection", result);
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

          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSingularPoints", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getSingularPoints", result);
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

          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinationType::class$ = NULL;
          jmethodID *CombinationType::mids$ = NULL;
          bool CombinationType::live$ = false;
          CombinationType *CombinationType::GEOMETRY_FREE = NULL;
          CombinationType *CombinationType::GRAPHIC = NULL;
          CombinationType *CombinationType::IONO_FREE = NULL;
          CombinationType *CombinationType::MELBOURNE_WUBBENA = NULL;
          CombinationType *CombinationType::NARROW_LANE = NULL;
          CombinationType *CombinationType::PHASE_MINUS_CODE = NULL;
          CombinationType *CombinationType::WIDE_LANE = NULL;

          jclass CombinationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_valueOf_b34d4427fb07a623] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_values_ed1fafe12983a149] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/gnss/CombinationType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEOMETRY_FREE = new CombinationType(env->getStaticObjectField(cls, "GEOMETRY_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              GRAPHIC = new CombinationType(env->getStaticObjectField(cls, "GRAPHIC", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              IONO_FREE = new CombinationType(env->getStaticObjectField(cls, "IONO_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              MELBOURNE_WUBBENA = new CombinationType(env->getStaticObjectField(cls, "MELBOURNE_WUBBENA", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              NARROW_LANE = new CombinationType(env->getStaticObjectField(cls, "NARROW_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              PHASE_MINUS_CODE = new CombinationType(env->getStaticObjectField(cls, "PHASE_MINUS_CODE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              WIDE_LANE = new CombinationType(env->getStaticObjectField(cls, "WIDE_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String CombinationType::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          CombinationType CombinationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CombinationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b34d4427fb07a623], a0.this$));
          }

          JArray< CombinationType > CombinationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CombinationType >(env->callStaticObjectMethod(cls, mids$[mid_values_ed1fafe12983a149]));
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
          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args);
          static PyObject *t_CombinationType_getName(t_CombinationType *self);
          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CombinationType_values(PyTypeObject *type);
          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data);
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data);
          static PyGetSetDef t_CombinationType__fields_[] = {
            DECLARE_GET_FIELD(t_CombinationType, name),
            DECLARE_GET_FIELD(t_CombinationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinationType__methods_[] = {
            DECLARE_METHOD(t_CombinationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_CombinationType, getName, METH_NOARGS),
            DECLARE_METHOD(t_CombinationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinationType)[] = {
            { Py_tp_methods, t_CombinationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CombinationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CombinationType, t_CombinationType, CombinationType);
          PyObject *t_CombinationType::wrap_Object(const CombinationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CombinationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CombinationType::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinationType), &PY_TYPE_DEF(CombinationType), module, "CombinationType", 0);
          }

          void t_CombinationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "class_", make_descriptor(CombinationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "wrapfn_", make_descriptor(t_CombinationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(CombinationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GEOMETRY_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GEOMETRY_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GRAPHIC", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GRAPHIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "IONO_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::IONO_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "MELBOURNE_WUBBENA", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::MELBOURNE_WUBBENA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "NARROW_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::NARROW_LANE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "PHASE_MINUS_CODE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::PHASE_MINUS_CODE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "WIDE_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::WIDE_LANE)));
          }

          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinationType::initializeClass, 1)))
              return NULL;
            return t_CombinationType::wrap_Object(CombinationType(((t_CombinationType *) arg)->object.this$));
          }
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CombinationType_getName(t_CombinationType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CombinationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::valueOf(a0));
              return t_CombinationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CombinationType_values(PyTypeObject *type)
          {
            JArray< CombinationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::values());
            return JArray<jobject>(result.this$).wrap(t_CombinationType::wrap_jobject);
          }
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data)
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
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitFixedStepHandler::class$ = NULL;
        jmethodID *OrekitFixedStepHandler::mids$ = NULL;
        bool OrekitFixedStepHandler::live$ = false;

        jclass OrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_0ee5c56004643a2e] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_eb5e26882ba2d9b9] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitFixedStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_0ee5c56004643a2e], a0.this$);
        }

        void OrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_0ee5c56004643a2e], a0.this$);
        }

        void OrekitFixedStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_eb5e26882ba2d9b9], a0.this$, a1.this$, a2);
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
      namespace sampling {
        static PyObject *t_OrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_finish(t_OrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_handleStep(t_OrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_init(t_OrekitFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_OrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_OrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_OrekitFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_OrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitFixedStepHandler, t_OrekitFixedStepHandler, OrekitFixedStepHandler);

        void t_OrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitFixedStepHandler), &PY_TYPE_DEF(OrekitFixedStepHandler), module, "OrekitFixedStepHandler", 0);
        }

        void t_OrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "class_", make_descriptor(OrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "wrapfn_", make_descriptor(t_OrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_OrekitFixedStepHandler::wrap_Object(OrekitFixedStepHandler(((t_OrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_OrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitFixedStepHandler_finish(t_OrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_OrekitFixedStepHandler_handleStep(t_OrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_OrekitFixedStepHandler_init(t_OrekitFixedStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;

          if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
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
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_dff5885c2c873297] = env->getMethodID(cls, "getMaxGrowth", "()D");
            mids$[mid_getMinReduction_dff5885c2c873297] = env->getMethodID(cls, "getMinReduction", "()D");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_dff5885c2c873297] = env->getMethodID(cls, "getSafety", "()D");
            mids$[mid_integrate_3c1cc820e563e3e9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_17db3a65980d3441] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
            mids$[mid_setMinReduction_17db3a65980d3441] = env->getMethodID(cls, "setMinReduction", "(D)V");
            mids$[mid_setSafety_17db3a65980d3441] = env->getMethodID(cls, "setSafety", "(D)V");
            mids$[mid_createInterpolator_3c3452116c60fd90] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");
            mids$[mid_estimateError_c892cfaf07a4634f] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMaxGrowth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_dff5885c2c873297]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMinReduction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinReduction_dff5885c2c873297]);
        }

        jint EmbeddedRungeKuttaIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getSafety() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSafety_dff5885c2c873297]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative EmbeddedRungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3c1cc820e563e3e9], a0.this$, a1.this$, a2));
        }

        void EmbeddedRungeKuttaIntegrator::setMaxGrowth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_17db3a65980d3441], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setMinReduction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_17db3a65980d3441], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setSafety(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_17db3a65980d3441], a0);
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
        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, safety),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaIntegrator, t_EmbeddedRungeKuttaIntegrator, EmbeddedRungeKuttaIntegrator);

        void t_EmbeddedRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaIntegrator), module, "EmbeddedRungeKuttaIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaIntegrator::wrap_Object(EmbeddedRungeKuttaIntegrator(((t_EmbeddedRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinReduction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSafety());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args)
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

          return callSuper(PY_TYPE(EmbeddedRungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
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

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
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

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
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

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
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

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinReduction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
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

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSafety());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFile::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFile::mids$ = NULL;
        bool PythonAttitudeEphemerisFile::live$ = false;

        jclass PythonAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFile::PythonAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonAttitudeEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAttitudeEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAttitudeEphemerisFile::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self);
        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFile, t_PythonAttitudeEphemerisFile, PythonAttitudeEphemerisFile);

        void t_PythonAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFile), &PY_TYPE_DEF(PythonAttitudeEphemerisFile), module, "PythonAttitudeEphemerisFile", 1);
        }

        void t_PythonAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "class_", make_descriptor(PythonAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonAttitudeEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFile::wrap_Object(PythonAttitudeEphemerisFile(((t_PythonAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
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

        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data)
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
#include "java/io/FilterOutputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FilterOutputStream::class$ = NULL;
    jmethodID *FilterOutputStream::mids$ = NULL;
    bool FilterOutputStream::live$ = false;

    jclass FilterOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FilterOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_fd7cb6689cfa6eeb] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_20012b3010a39c05] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d7af9aedcdd3845b] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FilterOutputStream::FilterOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_fd7cb6689cfa6eeb, a0.this$)) {}

    void FilterOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void FilterOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_20012b3010a39c05], a0.this$);
    }

    void FilterOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d7af9aedcdd3845b], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args);

    static PyMethodDef t_FilterOutputStream__methods_[] = {
      DECLARE_METHOD(t_FilterOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FilterOutputStream)[] = {
      { Py_tp_methods, t_FilterOutputStream__methods_ },
      { Py_tp_init, (void *) t_FilterOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FilterOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(FilterOutputStream, t_FilterOutputStream, FilterOutputStream);

    void t_FilterOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FilterOutputStream), &PY_TYPE_DEF(FilterOutputStream), module, "FilterOutputStream", 0);
    }

    void t_FilterOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "class_", make_descriptor(FilterOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "wrapfn_", make_descriptor(t_FilterOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FilterOutputStream::initializeClass, 1)))
        return NULL;
      return t_FilterOutputStream::wrap_Object(FilterOutputStream(((t_FilterOutputStream *) arg)->object.this$));
    }
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FilterOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      FilterOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = FilterOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {

          ::java::lang::Class *ParsedMessage::class$ = NULL;
          jmethodID *ParsedMessage::mids$ = NULL;
          bool ParsedMessage::live$ = false;

          jclass ParsedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ParsedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTypeCode_570ce0828f81a2c1] = env->getMethodID(cls, "getTypeCode", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint ParsedMessage::getTypeCode() const
          {
            return env->callIntMethod(this$, mids$[mid_getTypeCode_570ce0828f81a2c1]);
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
          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self);
          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data);
          static PyGetSetDef t_ParsedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_ParsedMessage, typeCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParsedMessage__methods_[] = {
            DECLARE_METHOD(t_ParsedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, getTypeCode, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParsedMessage)[] = {
            { Py_tp_methods, t_ParsedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ParsedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParsedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ParsedMessage, t_ParsedMessage, ParsedMessage);

          void t_ParsedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ParsedMessage), &PY_TYPE_DEF(ParsedMessage), module, "ParsedMessage", 0);
          }

          void t_ParsedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "class_", make_descriptor(ParsedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "wrapfn_", make_descriptor(t_ParsedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParsedMessage::initializeClass, 1)))
              return NULL;
            return t_ParsedMessage::wrap_Object(ParsedMessage(((t_ParsedMessage *) arg)->object.this$));
          }
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParsedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTypeCode());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTypeCode());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"
#include "java/util/Locale.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedMessages$UTF8Control::class$ = NULL;
        jmethodID *RuggedMessages$UTF8Control::mids$ = NULL;
        bool RuggedMessages$UTF8Control::live$ = false;

        jclass RuggedMessages$UTF8Control::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedMessages$UTF8Control");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newBundle_b7c54cce3a9709ed] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedMessages$UTF8Control::RuggedMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::java::util::ResourceBundle RuggedMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
        {
          return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_b7c54cce3a9709ed], a0.this$, a1.this$, a2.this$, a3.this$, a4));
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
      namespace errors {
        static PyObject *t_RuggedMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages$UTF8Control_of_(t_RuggedMessages$UTF8Control *self, PyObject *args);
        static int t_RuggedMessages$UTF8Control_init_(t_RuggedMessages$UTF8Control *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedMessages$UTF8Control_newBundle(t_RuggedMessages$UTF8Control *self, PyObject *args);
        static PyObject *t_RuggedMessages$UTF8Control_get__parameters_(t_RuggedMessages$UTF8Control *self, void *data);
        static PyGetSetDef t_RuggedMessages$UTF8Control__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedMessages$UTF8Control, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedMessages$UTF8Control__methods_[] = {
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, of_, METH_VARARGS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, newBundle, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedMessages$UTF8Control)[] = {
          { Py_tp_methods, t_RuggedMessages$UTF8Control__methods_ },
          { Py_tp_init, (void *) t_RuggedMessages$UTF8Control_init_ },
          { Py_tp_getset, t_RuggedMessages$UTF8Control__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedMessages$UTF8Control)[] = {
          &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
          NULL
        };

        DEFINE_TYPE(RuggedMessages$UTF8Control, t_RuggedMessages$UTF8Control, RuggedMessages$UTF8Control);
        PyObject *t_RuggedMessages$UTF8Control::wrap_Object(const RuggedMessages$UTF8Control& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages$UTF8Control::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages$UTF8Control *self = (t_RuggedMessages$UTF8Control *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RuggedMessages$UTF8Control::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages$UTF8Control::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages$UTF8Control *self = (t_RuggedMessages$UTF8Control *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RuggedMessages$UTF8Control::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedMessages$UTF8Control), &PY_TYPE_DEF(RuggedMessages$UTF8Control), module, "RuggedMessages$UTF8Control", 0);
        }

        void t_RuggedMessages$UTF8Control::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "class_", make_descriptor(RuggedMessages$UTF8Control::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "wrapfn_", make_descriptor(t_RuggedMessages$UTF8Control::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedMessages$UTF8Control::initializeClass, 1)))
            return NULL;
          return t_RuggedMessages$UTF8Control::wrap_Object(RuggedMessages$UTF8Control(((t_RuggedMessages$UTF8Control *) arg)->object.this$));
        }
        static PyObject *t_RuggedMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedMessages$UTF8Control::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RuggedMessages$UTF8Control_of_(t_RuggedMessages$UTF8Control *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RuggedMessages$UTF8Control_init_(t_RuggedMessages$UTF8Control *self, PyObject *args, PyObject *kwds)
        {
          RuggedMessages$UTF8Control object((jobject) NULL);

          INT_CALL(object = RuggedMessages$UTF8Control());
          self->object = object;
          self->parameters[0] = ::org::orekit::rugged::errors::PY_TYPE(RuggedMessages);

          return 0;
        }

        static PyObject *t_RuggedMessages$UTF8Control_newBundle(t_RuggedMessages$UTF8Control *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          ::java::lang::ClassLoader a3((jobject) NULL);
          jboolean a4;
          ::java::util::ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
            return ::java::util::t_ResourceBundle::wrap_Object(result);
          }

          return callSuper(PY_TYPE(RuggedMessages$UTF8Control), (PyObject *) self, "newBundle", args, 2);
        }
        static PyObject *t_RuggedMessages$UTF8Control_get__parameters_(t_RuggedMessages$UTF8Control *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/NewtonianAttraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *NewtonianAttraction::class$ = NULL;
        jmethodID *NewtonianAttraction::mids$ = NULL;
        bool NewtonianAttraction::live$ = false;
        ::java::lang::String *NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT = NULL;

        jclass NewtonianAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/NewtonianAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_addContribution_5852b6ea0a71dcb4] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_9d1574df69c5f1ff] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_bf1d7732f1acb697] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMu_cbbccee8cfc483ca] = env->getMethodID(cls, "getMu", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonianAttraction::NewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_5852b6ea0a71dcb4], a0.this$, a1.this$);
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_9d1574df69c5f1ff], a0.this$, a1.this$);
        }

        jboolean NewtonianAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        jdouble NewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_bf1d7732f1acb697], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement NewtonianAttraction::getMu(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_cbbccee8cfc483ca], a0.this$, a1.this$));
        }

        ::java::util::List NewtonianAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
      namespace gravity {
        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data);
        static PyGetSetDef t_NewtonianAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonianAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonianAttraction__methods_[] = {
          DECLARE_METHOD(t_NewtonianAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getMu, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonianAttraction)[] = {
          { Py_tp_methods, t_NewtonianAttraction__methods_ },
          { Py_tp_init, (void *) t_NewtonianAttraction_init_ },
          { Py_tp_getset, t_NewtonianAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonianAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NewtonianAttraction, t_NewtonianAttraction, NewtonianAttraction);

        void t_NewtonianAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonianAttraction), &PY_TYPE_DEF(NewtonianAttraction), module, "NewtonianAttraction", 0);
        }

        void t_NewtonianAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "class_", make_descriptor(NewtonianAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "wrapfn_", make_descriptor(t_NewtonianAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(NewtonianAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "CENTRAL_ATTRACTION_COEFFICIENT", make_descriptor(j2p(*NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT)));
        }

        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonianAttraction::initializeClass, 1)))
            return NULL;
          return t_NewtonianAttraction::wrap_Object(NewtonianAttraction(((t_NewtonianAttraction *) arg)->object.this$));
        }
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonianAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          NewtonianAttraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = NewtonianAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addContribution", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getMu(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationSensorKey::class$ = NULL;
              jmethodID *AttitudeDeterminationSensorKey::mids$ = NULL;
              bool AttitudeDeterminationSensorKey::live$ = false;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_FREQUENCY = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NUMBER = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_USED = NULL;

              jclass AttitudeDeterminationSensorKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_1e5bd59c38a14be0] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)Z");
                  mids$[mid_valueOf_f31d1837e04175ce] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");
                  mids$[mid_values_3e9c07923ec176f7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  NUMBER_SENSOR_NOISE_COVARIANCE = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "NUMBER_SENSOR_NOISE_COVARIANCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_FREQUENCY = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_FREQUENCY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NOISE_STDDEV = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NUMBER = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NUMBER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_USED = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationSensorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_1e5bd59c38a14be0], a0.this$, a1.this$, a2.this$);
              }

              AttitudeDeterminationSensorKey AttitudeDeterminationSensorKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationSensorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f31d1837e04175ce], a0.this$));
              }

              JArray< AttitudeDeterminationSensorKey > AttitudeDeterminationSensorKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationSensorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_3e9c07923ec176f7]));
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
              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationSensorKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationSensorKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationSensorKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationSensorKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationSensorKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationSensorKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationSensorKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationSensorKey, t_AttitudeDeterminationSensorKey, AttitudeDeterminationSensorKey);
              PyObject *t_AttitudeDeterminationSensorKey::wrap_Object(const AttitudeDeterminationSensorKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationSensorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationSensorKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationSensorKey), &PY_TYPE_DEF(AttitudeDeterminationSensorKey), module, "AttitudeDeterminationSensorKey", 0);
              }

              void t_AttitudeDeterminationSensorKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "class_", make_descriptor(AttitudeDeterminationSensorKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationSensorKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "NUMBER_SENSOR_NOISE_COVARIANCE", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_FREQUENCY", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_FREQUENCY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NUMBER", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NUMBER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_USED", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_USED)));
              }

              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationSensorKey::wrap_Object(AttitudeDeterminationSensorKey(((t_AttitudeDeterminationSensorKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationSensorKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::valueOf(a0));
                  return t_AttitudeDeterminationSensorKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationSensorKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationSensorKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data)
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
#include "org/orekit/rugged/adjustment/AdjustmentContext.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *AdjustmentContext::class$ = NULL;
        jmethodID *AdjustmentContext::mids$ = NULL;
        bool AdjustmentContext::live$ = false;

        jclass AdjustmentContext::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/AdjustmentContext");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_53a0040bd172c677] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;Lorg/orekit/rugged/adjustment/measurements/Observables;)V");
            mids$[mid_estimateFreeParameters_f579bcabd6fa2037] = env->getMethodID(cls, "estimateFreeParameters", "(Ljava/util/Collection;ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_setOptimizer_63f13867ea40ee93] = env->getMethodID(cls, "setOptimizer", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdjustmentContext::AdjustmentContext(const ::java::util::Collection & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53a0040bd172c677, a0.this$, a1.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum AdjustmentContext::estimateFreeParameters(const ::java::util::Collection & a0, jint a1, jdouble a2) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_estimateFreeParameters_f579bcabd6fa2037], a0.this$, a1, a2));
        }

        void AdjustmentContext::setOptimizer(const ::org::orekit::rugged::adjustment::OptimizerId & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOptimizer_63f13867ea40ee93], a0.this$);
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
        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args);
        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg);
        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data);
        static PyGetSetDef t_AdjustmentContext__fields_[] = {
          DECLARE_SET_FIELD(t_AdjustmentContext, optimizer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdjustmentContext__methods_[] = {
          DECLARE_METHOD(t_AdjustmentContext, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, estimateFreeParameters, METH_VARARGS),
          DECLARE_METHOD(t_AdjustmentContext, setOptimizer, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdjustmentContext)[] = {
          { Py_tp_methods, t_AdjustmentContext__methods_ },
          { Py_tp_init, (void *) t_AdjustmentContext_init_ },
          { Py_tp_getset, t_AdjustmentContext__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdjustmentContext)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdjustmentContext, t_AdjustmentContext, AdjustmentContext);

        void t_AdjustmentContext::install(PyObject *module)
        {
          installType(&PY_TYPE(AdjustmentContext), &PY_TYPE_DEF(AdjustmentContext), module, "AdjustmentContext", 0);
        }

        void t_AdjustmentContext::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "class_", make_descriptor(AdjustmentContext::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "wrapfn_", make_descriptor(t_AdjustmentContext::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdjustmentContext::initializeClass, 1)))
            return NULL;
          return t_AdjustmentContext::wrap_Object(AdjustmentContext(((t_AdjustmentContext *) arg)->object.this$));
        }
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdjustmentContext::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          AdjustmentContext object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Collection::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            INT_CALL(object = AdjustmentContext(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jdouble a2;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArgs(args, "KID", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateFreeParameters(a0, a1, a2));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateFreeParameters", args);
          return NULL;
        }

        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg)
        {
          ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
          {
            OBJ_CALL(self->object.setOptimizer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOptimizer", arg);
          return NULL;
        }

        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::adjustment::OptimizerId value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &value))
            {
              INT_CALL(self->object.setOptimizer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "optimizer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Maneuver::class$ = NULL;
              jmethodID *Maneuver::mids$ = NULL;
              bool Maneuver::live$ = false;

              jclass Maneuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Maneuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getDeltaMass_dff5885c2c873297] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_dff5885c2c873297] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochStart_85703d13e302437e] = env->getMethodID(cls, "getEpochStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getFrame_5d5dd95b04037824] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTorque_d52645e0d4c07563] = env->getMethodID(cls, "getTorque", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_setDeltaMass_17db3a65980d3441] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_17db3a65980d3441] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochStart_600a2a61652bc473] = env->getMethodID(cls, "setEpochStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTorque_bb79ca80d85d0a66] = env->getMethodID(cls, "setTorque", "(ID)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_dff5885c2c873297]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_dff5885c2c873297]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochStart_85703d13e302437e]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_5d5dd95b04037824]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getTorque() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTorque_d52645e0d4c07563]));
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_17db3a65980d3441], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_17db3a65980d3441], a0);
              }

              void Maneuver::setEpochStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochStart_600a2a61652bc473], a0.this$);
              }

              void Maneuver::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void Maneuver::setTorque(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setTorque_bb79ca80d85d0a66], a0, a1);
              }

              void Maneuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            namespace apm {
              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self);
              static PyObject *t_Maneuver_getDuration(t_Maneuver *self);
              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self);
              static PyObject *t_Maneuver_getFrame(t_Maneuver *self);
              static PyObject *t_Maneuver_getTorque(t_Maneuver *self);
              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data);
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data);
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data);
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data);
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data);
              static PyGetSetDef t_Maneuver__fields_[] = {
                DECLARE_GETSET_FIELD(t_Maneuver, deltaMass),
                DECLARE_GETSET_FIELD(t_Maneuver, duration),
                DECLARE_GETSET_FIELD(t_Maneuver, epochStart),
                DECLARE_GETSET_FIELD(t_Maneuver, frame),
                DECLARE_GET_FIELD(t_Maneuver, torque),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Maneuver__methods_[] = {
                DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getEpochStart, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getTorque, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_Maneuver, setDuration, METH_O),
                DECLARE_METHOD(t_Maneuver, setEpochStart, METH_O),
                DECLARE_METHOD(t_Maneuver, setFrame, METH_O),
                DECLARE_METHOD(t_Maneuver, setTorque, METH_VARARGS),
                DECLARE_METHOD(t_Maneuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
                { Py_tp_methods, t_Maneuver__methods_ },
                { Py_tp_init, (void *) t_Maneuver_init_ },
                { Py_tp_getset, t_Maneuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

              void t_Maneuver::install(PyObject *module)
              {
                installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
              }

              void t_Maneuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
                  return NULL;
                return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
              }
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Maneuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
              {
                Maneuver object((jobject) NULL);

                INT_CALL(object = Maneuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getDuration(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getFrame(t_Maneuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getTorque(t_Maneuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochStart", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFrame", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setTorque(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTorque", args);
                return NULL;
              }

              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Maneuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochStart", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "frame", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
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
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Maneuver::class$ = NULL;
        jmethodID *Maneuver::mids$ = NULL;
        bool Maneuver::live$ = false;

        jclass Maneuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Maneuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1b49064004922e0f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addContribution_5852b6ea0a71dcb4] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_9d1574df69c5f1ff] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getAttitudeOverride_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_67739b20d9566a8c] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getManeuverTriggers_37940bf6d7d342ef] = env->getMethodID(cls, "getManeuverTriggers", "()Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropulsionModel_559c6850652697a2] = env->getMethodID(cls, "getPropulsionModel", "()Lorg/orekit/forces/maneuvers/propulsion/PropulsionModel;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Maneuver::Maneuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::PropulsionModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1b49064004922e0f, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Maneuver::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_5852b6ea0a71dcb4], a0.this$, a1.this$);
        }

        void Maneuver::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_9d1574df69c5f1ff], a0.this$, a1.this$);
        }

        jboolean Maneuver::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::org::orekit::attitudes::AttitudeProvider Maneuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_a904f3d015a354a0]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType Maneuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_67739b20d9566a8c]));
        }

        ::java::util::stream::Stream Maneuver::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
        }

        ::java::util::stream::Stream Maneuver::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
        }

        ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers Maneuver::getManeuverTriggers() const
        {
          return ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers(env->callObjectMethod(this$, mids$[mid_getManeuverTriggers_37940bf6d7d342ef]));
        }

        ::java::lang::String Maneuver::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        ::java::util::List Maneuver::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        ::org::orekit::forces::maneuvers::propulsion::PropulsionModel Maneuver::getPropulsionModel() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::PropulsionModel(env->callObjectMethod(this$, mids$[mid_getPropulsionModel_559c6850652697a2]));
        }

        void Maneuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
        }

        void Maneuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self);
        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self);
        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self);
        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self);
        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg);
        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self);
        static PyObject *t_Maneuver_getName(t_Maneuver *self);
        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self);
        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self);
        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args);
        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data);
        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data);
        static PyGetSetDef t_Maneuver__fields_[] = {
          DECLARE_GET_FIELD(t_Maneuver, attitudeOverride),
          DECLARE_GET_FIELD(t_Maneuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_Maneuver, eventDetectors),
          DECLARE_GET_FIELD(t_Maneuver, maneuverTriggers),
          DECLARE_GET_FIELD(t_Maneuver, name),
          DECLARE_GET_FIELD(t_Maneuver, parametersDrivers),
          DECLARE_GET_FIELD(t_Maneuver, propulsionModel),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Maneuver__methods_[] = {
          DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Maneuver, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_Maneuver, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_Maneuver, getManeuverTriggers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getName, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, getPropulsionModel, METH_NOARGS),
          DECLARE_METHOD(t_Maneuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
          { Py_tp_methods, t_Maneuver__methods_ },
          { Py_tp_init, (void *) t_Maneuver_init_ },
          { Py_tp_getset, t_Maneuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

        void t_Maneuver::install(PyObject *module)
        {
          installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
        }

        void t_Maneuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
            return NULL;
          return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
        }
        static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Maneuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel a2((jobject) NULL);
          Maneuver object((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::PropulsionModel::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = Maneuver(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Maneuver_acceleration(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_Maneuver_addContribution(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addContribution", args);
          return NULL;
        }

        static PyObject *t_Maneuver_dependsOnPositionOnly(t_Maneuver *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Maneuver_getAttitudeOverride(t_Maneuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getControl3DVectorCostType(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getEventDetectors(t_Maneuver *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_Maneuver_getFieldEventDetectors(t_Maneuver *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_Maneuver_getManeuverTriggers(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers result((jobject) NULL);
          OBJ_CALL(result = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(result);
        }

        static PyObject *t_Maneuver_getName(t_Maneuver *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Maneuver_getParametersDrivers(t_Maneuver *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Maneuver_getPropulsionModel(t_Maneuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(result);
        }

        static PyObject *t_Maneuver_init(t_Maneuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.init(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(self->object.init(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_Maneuver_get__attitudeOverride(t_Maneuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__control3DVectorCostType(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__eventDetectors(t_Maneuver *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__maneuverTriggers(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers value((jobject) NULL);
          OBJ_CALL(value = self->object.getManeuverTriggers());
          return ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggers::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__name(t_Maneuver *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Maneuver_get__parametersDrivers(t_Maneuver *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Maneuver_get__propulsionModel(t_Maneuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropulsionModel());
          return ::org::orekit::forces::maneuvers::propulsion::t_PropulsionModel::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/FixedZHomothety.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *FixedZHomothety::class$ = NULL;
        jmethodID *FixedZHomothety::mids$ = NULL;
        bool FixedZHomothety::live$ = false;

        jclass FixedZHomothety::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/FixedZHomothety");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1b3f5cad10162d50] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
            mids$[mid_getParametersDrivers_20f6d2b462aaef4b] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_c5b4a35f45a6f61e] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_43c702ec4c12ce7d] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedZHomothety::FixedZHomothety(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1b3f5cad10162d50, a0.this$, a1)) {}

        ::java::util::stream::Stream FixedZHomothety::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_20f6d2b462aaef4b]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_c5b4a35f45a6f61e], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_43c702ec4c12ce7d], a0, a1.this$, a2.this$));
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
      namespace los {
        static PyObject *t_FixedZHomothety_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FixedZHomothety_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FixedZHomothety_init_(t_FixedZHomothety *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FixedZHomothety_getParametersDrivers(t_FixedZHomothety *self);
        static PyObject *t_FixedZHomothety_transformLOS(t_FixedZHomothety *self, PyObject *args);
        static PyObject *t_FixedZHomothety_get__parametersDrivers(t_FixedZHomothety *self, void *data);
        static PyGetSetDef t_FixedZHomothety__fields_[] = {
          DECLARE_GET_FIELD(t_FixedZHomothety, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FixedZHomothety__methods_[] = {
          DECLARE_METHOD(t_FixedZHomothety, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedZHomothety, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedZHomothety, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_FixedZHomothety, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FixedZHomothety)[] = {
          { Py_tp_methods, t_FixedZHomothety__methods_ },
          { Py_tp_init, (void *) t_FixedZHomothety_init_ },
          { Py_tp_getset, t_FixedZHomothety__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FixedZHomothety)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FixedZHomothety, t_FixedZHomothety, FixedZHomothety);

        void t_FixedZHomothety::install(PyObject *module)
        {
          installType(&PY_TYPE(FixedZHomothety), &PY_TYPE_DEF(FixedZHomothety), module, "FixedZHomothety", 0);
        }

        void t_FixedZHomothety::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "class_", make_descriptor(FixedZHomothety::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "wrapfn_", make_descriptor(t_FixedZHomothety::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FixedZHomothety_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FixedZHomothety::initializeClass, 1)))
            return NULL;
          return t_FixedZHomothety::wrap_Object(FixedZHomothety(((t_FixedZHomothety *) arg)->object.this$));
        }
        static PyObject *t_FixedZHomothety_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FixedZHomothety::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FixedZHomothety_init_(t_FixedZHomothety *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          FixedZHomothety object((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            INT_CALL(object = FixedZHomothety(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FixedZHomothety_getParametersDrivers(t_FixedZHomothety *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_FixedZHomothety_transformLOS(t_FixedZHomothety *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_FixedZHomothety_get__parametersDrivers(t_FixedZHomothety *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *SecondOrderODE::class$ = NULL;
      jmethodID *SecondOrderODE::mids$ = NULL;
      bool SecondOrderODE::live$ = false;

      jclass SecondOrderODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/SecondOrderODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeSecondDerivatives_277df7406e8cc74b] = env->getMethodID(cls, "computeSecondDerivatives", "(D[D[D)[D");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondOrderODE::computeSecondDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeSecondDerivatives_277df7406e8cc74b], a0, a1.this$, a2.this$));
      }

      jint SecondOrderODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
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
      static PyObject *t_SecondOrderODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondOrderODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondOrderODE_computeSecondDerivatives(t_SecondOrderODE *self, PyObject *args);
      static PyObject *t_SecondOrderODE_getDimension(t_SecondOrderODE *self);
      static PyObject *t_SecondOrderODE_get__dimension(t_SecondOrderODE *self, void *data);
      static PyGetSetDef t_SecondOrderODE__fields_[] = {
        DECLARE_GET_FIELD(t_SecondOrderODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecondOrderODE__methods_[] = {
        DECLARE_METHOD(t_SecondOrderODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondOrderODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondOrderODE, computeSecondDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_SecondOrderODE, getDimension, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecondOrderODE)[] = {
        { Py_tp_methods, t_SecondOrderODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SecondOrderODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecondOrderODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecondOrderODE, t_SecondOrderODE, SecondOrderODE);

      void t_SecondOrderODE::install(PyObject *module)
      {
        installType(&PY_TYPE(SecondOrderODE), &PY_TYPE_DEF(SecondOrderODE), module, "SecondOrderODE", 0);
      }

      void t_SecondOrderODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "class_", make_descriptor(SecondOrderODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "wrapfn_", make_descriptor(t_SecondOrderODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecondOrderODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecondOrderODE::initializeClass, 1)))
          return NULL;
        return t_SecondOrderODE::wrap_Object(SecondOrderODE(((t_SecondOrderODE *) arg)->object.this$));
      }
      static PyObject *t_SecondOrderODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecondOrderODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SecondOrderODE_computeSecondDerivatives(t_SecondOrderODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeSecondDerivatives(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeSecondDerivatives", args);
        return NULL;
      }

      static PyObject *t_SecondOrderODE_getDimension(t_SecondOrderODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecondOrderODE_get__dimension(t_SecondOrderODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractAlfriend1999::class$ = NULL;
              jmethodID *PythonAbstractAlfriend1999::mids$ = NULL;
              bool PythonAbstractAlfriend1999::live$ = false;

              jclass PythonAbstractAlfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_computeValue_8c19bdea212fe058] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_ff4594b9dc2244a3] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractAlfriend1999::PythonAbstractAlfriend1999(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

              void PythonAbstractAlfriend1999::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
              }

              jlong PythonAbstractAlfriend1999::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
              }

              void PythonAbstractAlfriend1999::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_PythonAbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractAlfriend1999_init_(t_PythonAbstractAlfriend1999 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractAlfriend1999_finalize(t_PythonAbstractAlfriend1999 *self);
              static PyObject *t_PythonAbstractAlfriend1999_pythonExtension(t_PythonAbstractAlfriend1999 *self, PyObject *args);
              static jdouble JNICALL t_PythonAbstractAlfriend1999_computeValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2);
              static jobject JNICALL t_PythonAbstractAlfriend1999_computeValue1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
              static jobject JNICALL t_PythonAbstractAlfriend1999_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractAlfriend1999_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractAlfriend1999_get__self(t_PythonAbstractAlfriend1999 *self, void *data);
              static PyGetSetDef t_PythonAbstractAlfriend1999__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractAlfriend1999, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractAlfriend1999__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractAlfriend1999, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAlfriend1999)[] = {
                { Py_tp_methods, t_PythonAbstractAlfriend1999__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractAlfriend1999_init_ },
                { Py_tp_getset, t_PythonAbstractAlfriend1999__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractAlfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(PythonAbstractAlfriend1999, t_PythonAbstractAlfriend1999, PythonAbstractAlfriend1999);

              void t_PythonAbstractAlfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractAlfriend1999), &PY_TYPE_DEF(PythonAbstractAlfriend1999), module, "PythonAbstractAlfriend1999", 1);
              }

              void t_PythonAbstractAlfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "class_", make_descriptor(PythonAbstractAlfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "wrapfn_", make_descriptor(t_PythonAbstractAlfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAlfriend1999), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractAlfriend1999::initializeClass);
                JNINativeMethod methods[] = {
                  { "computeValue", "(DDD)D", (void *) t_PythonAbstractAlfriend1999_computeValue0 },
                  { "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractAlfriend1999_computeValue1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractAlfriend1999_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractAlfriend1999_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractAlfriend1999::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractAlfriend1999::wrap_Object(PythonAbstractAlfriend1999(((t_PythonAbstractAlfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractAlfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractAlfriend1999_init_(t_PythonAbstractAlfriend1999 *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                PythonAbstractAlfriend1999 object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = PythonAbstractAlfriend1999(a0));
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

              static PyObject *t_PythonAbstractAlfriend1999_finalize(t_PythonAbstractAlfriend1999 *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractAlfriend1999_pythonExtension(t_PythonAbstractAlfriend1999 *self, PyObject *args)
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

              static jdouble JNICALL t_PythonAbstractAlfriend1999_computeValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                jdouble value;
                PyObject *result = PyObject_CallMethod(obj, "computeValue", "ddd", (double) a0, (double) a1, (double) a2);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "D", &value))
                {
                  throwTypeError("computeValue", result);
                  Py_DECREF(result);
                }
                else
                {
                  Py_DECREF(result);
                  return value;
                }

                return (jdouble) 0;
              }

              static jobject JNICALL t_PythonAbstractAlfriend1999_computeValue1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *result = PyObject_CallMethod(obj, "computeValue", "OOO", o0, o1, o2);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
                {
                  throwTypeError("computeValue", result);
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

              static jobject JNICALL t_PythonAbstractAlfriend1999_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static void JNICALL t_PythonAbstractAlfriend1999_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractAlfriend1999::mids$[PythonAbstractAlfriend1999::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractAlfriend1999_get__self(t_PythonAbstractAlfriend1999 *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/Map.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldShortPeriodTerms::class$ = NULL;
            jmethodID *FieldShortPeriodTerms::mids$ = NULL;
            bool FieldShortPeriodTerms::live$ = false;

            jclass FieldShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCoefficients_8ceaa814d240672e] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_11b109bd155ca898] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_32514bc2dbb6aee5] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map FieldShortPeriodTerms::getCoefficients(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_8ceaa814d240672e], a0.this$, a1.this$));
            }

            ::java::lang::String FieldShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_11b109bd155ca898]));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodTerms::value(const ::org::orekit::orbits::FieldOrbit & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_32514bc2dbb6aee5], a0.this$));
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
            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self);
            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data);
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data);
            static PyGetSetDef t_FieldShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, coefficientsKeyPrefix),
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_FieldShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficients, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficientsKeyPrefix, METH_NOARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldShortPeriodTerms)[] = {
              { Py_tp_methods, t_FieldShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldShortPeriodTerms, t_FieldShortPeriodTerms, FieldShortPeriodTerms);
            PyObject *t_FieldShortPeriodTerms::wrap_Object(const FieldShortPeriodTerms& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldShortPeriodTerms::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldShortPeriodTerms), &PY_TYPE_DEF(FieldShortPeriodTerms), module, "FieldShortPeriodTerms", 0);
            }

            void t_FieldShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "class_", make_descriptor(FieldShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "wrapfn_", make_descriptor(t_FieldShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_FieldShortPeriodTerms::wrap_Object(FieldShortPeriodTerms(((t_FieldShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Set a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Set::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Set::parameters_))
              {
                OBJ_CALL(result = self->object.getCoefficients(a0, a1));
                return ::java::util::t_Map::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCoefficients", args);
              return NULL;
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCoefficientsKeyPrefix());
              return j2p(result);
            }

            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg)
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCoefficientsKeyPrefix());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *FirstMoment::class$ = NULL;
          jmethodID *FirstMoment::mids$ = NULL;
          bool FirstMoment::live$ = false;

          jclass FirstMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/FirstMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_3b80ff938c90ebee] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/FirstMoment;");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_aggregate_a3de77dcfa83aed2] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FirstMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          FirstMoment FirstMoment::copy() const
          {
            return FirstMoment(env->callObjectMethod(this$, mids$[mid_copy_3b80ff938c90ebee]));
          }

          jlong FirstMoment::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble FirstMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void FirstMoment::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data);
          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data);
          static PyGetSetDef t_FirstMoment__fields_[] = {
            DECLARE_GET_FIELD(t_FirstMoment, n),
            DECLARE_GET_FIELD(t_FirstMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FirstMoment__methods_[] = {
            DECLARE_METHOD(t_FirstMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getN, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FirstMoment)[] = {
            { Py_tp_methods, t_FirstMoment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FirstMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FirstMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(FirstMoment, t_FirstMoment, FirstMoment);

          void t_FirstMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(FirstMoment), &PY_TYPE_DEF(FirstMoment), module, "FirstMoment", 0);
          }

          void t_FirstMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "class_", make_descriptor(FirstMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "wrapfn_", make_descriptor(t_FirstMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FirstMoment::initializeClass, 1)))
              return NULL;
            return t_FirstMoment::wrap_Object(FirstMoment(((t_FirstMoment *) arg)->object.this$));
          }
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FirstMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args)
          {
            FirstMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_FirstMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *PiecewiseBicubicSplineInterpolatingFunction::class$ = NULL;
        jmethodID *PiecewiseBicubicSplineInterpolatingFunction::mids$ = NULL;
        bool PiecewiseBicubicSplineInterpolatingFunction::live$ = false;

        jclass PiecewiseBicubicSplineInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2656072909750fef] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_isValidPoint_ff85a0d8ff097ee5] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_6746cc1cd9210d54] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolatingFunction::PiecewiseBicubicSplineInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2656072909750fef, a0.this$, a1.this$, a2.this$)) {}

        jboolean PiecewiseBicubicSplineInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_ff85a0d8ff097ee5], a0, a1);
        }

        jdouble PiecewiseBicubicSplineInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement PiecewiseBicubicSplineInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6746cc1cd9210d54], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PiecewiseBicubicSplineInterpolatingFunction_init_(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_isValidPoint(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args);
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_value(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_PiecewiseBicubicSplineInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PiecewiseBicubicSplineInterpolatingFunction)[] = {
          { Py_tp_methods, t_PiecewiseBicubicSplineInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_PiecewiseBicubicSplineInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PiecewiseBicubicSplineInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PiecewiseBicubicSplineInterpolatingFunction, t_PiecewiseBicubicSplineInterpolatingFunction, PiecewiseBicubicSplineInterpolatingFunction);

        void t_PiecewiseBicubicSplineInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), &PY_TYPE_DEF(PiecewiseBicubicSplineInterpolatingFunction), module, "PiecewiseBicubicSplineInterpolatingFunction", 0);
        }

        void t_PiecewiseBicubicSplineInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "class_", make_descriptor(PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "wrapfn_", make_descriptor(t_PiecewiseBicubicSplineInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_PiecewiseBicubicSplineInterpolatingFunction::wrap_Object(PiecewiseBicubicSplineInterpolatingFunction(((t_PiecewiseBicubicSplineInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PiecewiseBicubicSplineInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PiecewiseBicubicSplineInterpolatingFunction_init_(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          PiecewiseBicubicSplineInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            INT_CALL(object = PiecewiseBicubicSplineInterpolatingFunction(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_isValidPoint(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolatingFunction_value(t_PiecewiseBicubicSplineInterpolatingFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Ocm::class$ = NULL;
              jmethodID *Ocm::mids$ = NULL;
              bool Ocm::live$ = false;
              ::java::lang::String *Ocm::COV_LINE = NULL;
              ::java::lang::String *Ocm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Ocm::MAN_LINE = NULL;
              ::java::lang::String *Ocm::ROOT = NULL;
              ::java::lang::String *Ocm::TRAJ_LINE = NULL;
              ::java::lang::String *Ocm::UNKNOWN_OBJECT = NULL;

              jclass Ocm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ocm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2b261aaf5054b0fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_getData_881b04544853ed71] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmData;");
                  mids$[mid_getMetadata_ad80b8a9eaa21be5] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  MAN_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "MAN_LINE", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  TRAJ_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "TRAJ_LINE", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ocm::Ocm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_2b261aaf5054b0fb, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData Ocm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData(env->callObjectMethod(this$, mids$[mid_getData_881b04544853ed71]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata Ocm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_ad80b8a9eaa21be5]));
              }

              ::java::util::Map Ocm::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
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
              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args);
              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Ocm_getData(t_Ocm *self);
              static PyObject *t_Ocm_getMetadata(t_Ocm *self);
              static PyObject *t_Ocm_getSatellites(t_Ocm *self);
              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data);
              static PyGetSetDef t_Ocm__fields_[] = {
                DECLARE_GET_FIELD(t_Ocm, data),
                DECLARE_GET_FIELD(t_Ocm, metadata),
                DECLARE_GET_FIELD(t_Ocm, satellites),
                DECLARE_GET_FIELD(t_Ocm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ocm__methods_[] = {
                DECLARE_METHOD(t_Ocm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ocm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ocm)[] = {
                { Py_tp_methods, t_Ocm__methods_ },
                { Py_tp_init, (void *) t_Ocm_init_ },
                { Py_tp_getset, t_Ocm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ocm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Ocm, t_Ocm, Ocm);
              PyObject *t_Ocm::wrap_Object(const Ocm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Ocm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Ocm::install(PyObject *module)
              {
                installType(&PY_TYPE(Ocm), &PY_TYPE_DEF(Ocm), module, "Ocm", 0);
              }

              void t_Ocm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "class_", make_descriptor(Ocm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "wrapfn_", make_descriptor(t_Ocm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ocm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "COV_LINE", make_descriptor(j2p(*Ocm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Ocm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "MAN_LINE", make_descriptor(j2p(*Ocm::MAN_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "ROOT", make_descriptor(j2p(*Ocm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "TRAJ_LINE", make_descriptor(j2p(*Ocm::TRAJ_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Ocm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ocm::initializeClass, 1)))
                  return NULL;
                return t_Ocm::wrap_Object(Ocm(((t_Ocm *) arg)->object.this$));
              }
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ocm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Ocm object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Ocm(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Ocm_getData(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(result);
              }

              static PyObject *t_Ocm_getMetadata(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Ocm_getSatellites(t_Ocm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OcmSatelliteEphemeris));
              }
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/data/DataContext.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataContext::class$ = NULL;
      jmethodID *DataContext::mids$ = NULL;
      bool DataContext::live$ = false;

      jclass DataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCelestialBodies_c39e314555ec4f4c] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getDefault_a521f36e1cec1ec6] = env->getStaticMethodID(cls, "getDefault", "()Lorg/orekit/data/LazyLoadedDataContext;");
          mids$[mid_getFrames_e688bb8e310f8431] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_a3d479393ff4185d] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_b0af77e046f460cf] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_f0675560047d99cd] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_setDefault_06bc870c2321c274] = env->getStaticMethodID(cls, "setDefault", "(Lorg/orekit/data/LazyLoadedDataContext;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBodies DataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_c39e314555ec4f4c]));
      }

      ::org::orekit::data::LazyLoadedDataContext DataContext::getDefault()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::LazyLoadedDataContext(env->callStaticObjectMethod(cls, mids$[mid_getDefault_a521f36e1cec1ec6]));
      }

      ::org::orekit::frames::Frames DataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_e688bb8e310f8431]));
      }

      ::org::orekit::models::earth::GeoMagneticFields DataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_a3d479393ff4185d]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields DataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_b0af77e046f460cf]));
      }

      ::org::orekit::time::TimeScales DataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_f0675560047d99cd]));
      }

      void DataContext::setDefault(const ::org::orekit::data::LazyLoadedDataContext & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setDefault_06bc870c2321c274], a0.this$);
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
      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self);
      static PyObject *t_DataContext_getDefault(PyTypeObject *type);
      static PyObject *t_DataContext_getFrames(t_DataContext *self);
      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self);
      static PyObject *t_DataContext_getGravityFields(t_DataContext *self);
      static PyObject *t_DataContext_getTimeScales(t_DataContext *self);
      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data);
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data);
      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data);
      static PyGetSetDef t_DataContext__fields_[] = {
        DECLARE_GET_FIELD(t_DataContext, celestialBodies),
        DECLARE_GETSET_FIELD(t_DataContext, default),
        DECLARE_GET_FIELD(t_DataContext, frames),
        DECLARE_GET_FIELD(t_DataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_DataContext, gravityFields),
        DECLARE_GET_FIELD(t_DataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataContext__methods_[] = {
        DECLARE_METHOD(t_DataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getDefault, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getTimeScales, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, setDefault, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataContext)[] = {
        { Py_tp_methods, t_DataContext__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataContext, t_DataContext, DataContext);

      void t_DataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(DataContext), &PY_TYPE_DEF(DataContext), module, "DataContext", 0);
      }

      void t_DataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "class_", make_descriptor(DataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "wrapfn_", make_descriptor(t_DataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataContext::initializeClass, 1)))
          return NULL;
        return t_DataContext::wrap_Object(DataContext(((t_DataContext *) arg)->object.this$));
      }
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_DataContext_getDefault(PyTypeObject *type)
      {
        ::org::orekit::data::LazyLoadedDataContext result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::DataContext::getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(result);
      }

      static PyObject *t_DataContext_getFrames(t_DataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGravityFields(t_DataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getTimeScales(t_DataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::data::LazyLoadedDataContext a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::data::DataContext::setDefault(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setDefault", arg);
        return NULL;
      }

      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data)
      {
        ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(value);
      }
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &value))
          {
            INT_CALL(self->object.setDefault(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "default", arg);
        return -1;
      }

      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
